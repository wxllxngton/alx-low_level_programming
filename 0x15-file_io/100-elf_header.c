#include "main.h"

/**
 * print_elf_info - prints the ELF header information
 * @header: pointer to the ELF header
 */
void print_elf_info(unsigned char *header)
{
    printf("ELF Header:\n");

    /* Print the magic number */
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header[i]);
    printf("\n");

    /* Print class */
    printf("  Class:                             ");
    switch (header[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("Invalid class\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown class\n");
    }

    /* Print data */
    printf("  Data:                              ");
    switch (header[EI_DATA])
    {
        case ELFDATANONE:
            printf("Invalid data encoding\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown data format\n");
    }

    /* Print version */
    printf("  Version:                           %d", header[EI_VERSION]);
    switch (header[EI_VERSION])
    {
        case EV_CURRENT:
            printf(" (current)\n");
            break;
        default:
            printf("\n");
            break;
    }

    /* Print OS/ABI */
    printf("  OS/ABI:                            ");
    switch (header[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        case ELFOSABI_ARM_AEABI:
            printf("ARM EABI\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App\n");
            break;
        default:
            printf("<unknown: %x>\n", header[EI_OSABI]);
            break;
    }

    /* Print ABI version */
    printf("  ABI Version:                       %d\n", header[EI_ABIVERSION]);
}
