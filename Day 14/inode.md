# i-nodes Tables

A file system's i-node table contains one i-node (short for index node) for each file residing in the file system. I-nodes are identified numerically by their sequential location in the i-node table. The i-node number (or simply i-number) of a file is the first field displayed by the ls -li command. The information maintained in an i-node includes the following:

1) File type (e.g., regular file, directory, symbolic link, character device).

2) Owner (also referred to as the user ID or UID) for the file.

3) Group (also referred to as the group ID or GID) for the file.

4) Access permissions for three categories of user: owner (sometimes referred to as user), group, and other (the rest of the world).

5) Three timestamps: time of last access to the file (shown by ls -lu), time of last modification of the file (the default time shown by ls -l), and time of last status change (last change to i-node information, shown by ls -lc). As on other UNIX implementations, it is notable that most Linux file systems don't record the creation time of a file.

6) Number of hard links to the file.