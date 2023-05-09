#include "main.h"
#include <elf.h>

/**
 * elf_identity - a function that prints the e_ident field of ELF header
 * Magic, Class, Data
 */
void elf_identity(void)
{
	uint32_t magic = *(uint32_t*)(&header.e_ident[0]);
	uint8_t class = header.e_ident[EI_CLASS];
	uint8_t endian = header.e_ident[EI_DATA];
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	switch (class)
	{
		case ELFCLASSNONE:
			printf("Class: Invalid class\n");
			break;
		case ELFCLASS32:
			printf("Class: ELF32\n");
			break;
		case ELFCLASS64:
			printf("Class: ELF64\n");
			break;
		default:
			printf("Class: Unknown class\n");
			break;
	}
	switch (endian)
	{
		case ELFDATA2LSB:
			printf("Data: little endian\n");
			break;
		case ELFDATA2MSB:
			printf("Data: big endian\n");
			break;
		default:
			printf("Data: Unknown endianness\n");
			break;
	}
}
/**
 * ver - prints the version of the ELF header
 */
void ver(void)
{
	uint32_t version;

	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			version = *(uint32_t*)(&header + 0x10);
			break;
		case ELFCLASS64:
			version = *(uint32_t*)(&header + 0x12);
			break;
		default:
			fprintf(stderr, "Invalid ELF class\n");
			exit(98);
	}
	printf("Version: %d\n", version);
}

/**
 * osabi - prints the OS/ABI of the ELF header
 */
void osabi(void)
{
	uint8_t os_abi = header.e_ident[EI_OSABI];

	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("OS/ABI: UNIX System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("OS/ABI: HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("OS/ABI: NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("OS/ABI: Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("OS/ABI: Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("OS/ABI: FreeBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("OS/ABI: OpenBSD\n");
			break;
		case ELFOSABI_ARM:
			printf("OS/ABI: ARM architecture\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("OS/ABI: Standalone (embedded) application\n");
			break;
		default:
			printf("OS/ABI: Unknown\n");
			break;
}

/**
 * abi - prints the ABI Version of the ELF
 */
void abi(void)
{
	uint8_t abi_version = header.e_ident[EI_ABIVERSION];

	switch (header->e_ident[EI_ABIVERSION])
	{
		case 0:
			printf("ABI Version: 0\n");
			break;
		case 1:
			printf("ABI Version: 1\n");
			break;
		case 2:
			printf("ABI Version: 2\n");
			break;
		default:
			printf("ABI Version: Unknown\n");
			break;
	}
}

/**
 * type_and entry - a function that prints the type and entry point fields
 */
void type_and_entry(void)
{
	uint16_t file_type = header.e_type;
	Elf64_Addr entry_point = header.e_entry;

	switch (header->e_type)
	{
		case ET_NONE:
			printf("Type: No file type\n");
			break;
		case ET_REL:
			printf("Type: Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Type: Executable file\n");
			break;
		case ET_DYN:
			printf("Type: Shared object file\n");
			break;
		case ET_CORE:
			printf("Type: Core file\n");
			break;
		default:
			printf("Type: Unknown\n");
			break;
	}
	printf("%lx\n", header->e_entry);
}

/**
 * main - displays the information contained in the ELF header at the start.
 * @argc: number of arguments
 * @argv: an array of elements
 * Return: 0 On success
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 1)
	{
		perrr("Invalid number of arguments")
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	if (offset == (off_t)-1)
	{
		perror("Error seeking to beginning of file");
		close(fd);
		exit(98);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		perror("Failed to read file");
		close(fd);
		exit(98);
	}
	/*print out the ELF header*/
	printf("ELF Header:\n");
	elf_identity();
	ver();
	osabi();
	abi();
	type_and_entry();

	free(bufffer);
	close(fd);
	return 0;
}
