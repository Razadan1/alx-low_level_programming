#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
* display_error - Display an error message and exit with status code 98
* @msg: The error message to display
*/
void display_error(const char *msg);

/**
* display_elf_header - Display information from the ELF header
* @header: Pointer to the ELF header structure
*/
void display_elf_header(const Elf64_Ehdr *header);

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[]);

/**
* display_error - Display an error message and exit with status code 98
* @msg: The error message to display
*/
void display_error(const char *msg)
{

	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
* display_elf_header - Display information from the ELF header
* @header: Pointer to the ELF header structure
*/
void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)

	{

		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n",
	header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
	header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement,
	little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
	header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
	header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
	header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
	header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               0x%lx\n",
	(unsigned long)header->e_entry);

}

/**
* main - Entry point of the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	const char *filename = argv[1];

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		display_error("Failed to open file");
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		display_error("Failed to read ELF header");
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		display_error("Not an ELF file");
	}

	printf("ELF Header:\n");
	display_elf_header(&header);

	close(fd);
	return (0);
}
