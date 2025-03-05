# Link Files

There are two types of links: hard link and soft link.

## Hard Link

If you review the list of information stored in a file i-node, you will find that the i-node doesn't contain a filename; it is only the mapping within a directory list that defines the name of a file. This has a useful consequence: you can create multiple names in the same or in different directories each of which refers to the same i-node. These multiple names are known as links, or sometimes as hard links.

All native Linux and UNIX file systems support hard links. However, many non-UNIX file systems (e.g., Microsoft's VFAT) do not. (Microsoft's NTFS file system does support hard links.)

From the shell, we can create new hard links to an existing file using the In command

$ ls -li