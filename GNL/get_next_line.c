#include <fcntl.h>    // for open()
#include <unistd.h>   // for read(), close()
#include <stdlib.h>   // for malloc(), exit()
#include <stdio.h>    // for perror()
#include "get_next_line.h" // place everything as per the subject when done , gnlutils , headerfile , etc.

// ALMOST DONE , CHANGE SOME CODES FOR NORM AND BINARY HANDLING.

static	char	*extract_line(char *src, char targ)
{
	int		j;
	int		i;
	char	*line;

	i = 0;
	j = 0;
	while ((src[i]) && (src[i] != targ))
		i++;
	if (src[i] == targ)
		i++;
	line = malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		line[j] = src[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

static	char	*update_stash(char *stash)
{
	int		i;
	int		j;
	char	*new_stash;

	i = 0;
	j = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	i++;
	new_stash = malloc(ft_strlen(stash + i) + 1);
	if (!new_stash)
		return (NULL);
	while (stash[i])
	{
		new_stash[j] = stash[i];
		j++;
		i++;
	}
	free(stash);
	new_stash[j] = '\0';
	return (new_stash);
}

char *get_next_line(int fd)
{
	static char *stash;
	char 		testbuff[BUFFER_SIZE + 1];
	ssize_t		readbytes;
	char		*line;

	readbytes = 1;
	if (!stash)
	{
		stash = malloc(sizeof(char) * BUFFER_SIZE);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	while ((readbytes > 0) && (!(ft_strchr(stash, '\n'))))
	{
		readbytes = read(fd,testbuff,BUFFER_SIZE);
		if (readbytes <= 0 )
			break;
		testbuff[readbytes] = '\0';
		stash = ft_strjoin_free(stash, testbuff);
	}
	line = extract_line(stash, '\n');	
	stash = update_stash(stash);
	return (line);
}

int main() // just the basic work right now , we will build off from here.
{
	int 	fd = open("test.txt",O_RDONLY);
	int i = 2;
	while (i < 6)
	{
		printf("%s",get_next_line(fd));
		i++;
	}
}
