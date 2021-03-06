/*
 * Copyright (c) 2018-2020, the SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int fd = open("hax", O_CREAT | O_RDWR, 0755);
    ftruncate(fd, 0);
    close(fd);

    int rc = execlp("hax", "hax", nullptr);
    int saved_errno = errno;
    unlink("hax");
    if (rc == -1 && saved_errno == ENOEXEC) {
        printf("FAIL\n");
        return 1;
    }
    printf("PASS\n");
    return 0;
}
