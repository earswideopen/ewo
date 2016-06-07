/**
 * @file	tools.h
 * @brief	header file for the different tools used here and there
 */
#ifndef TOOLS_H
#define TOOLS_H

#define DEBUG() \
	fprintf(stderr, "\nDEBUG\n%s:%s:%d\n\n", __FILE__, __func__, __LINE__)

unsigned int ModuloInc(const unsigned int value, const unsigned int modulus);
void IsFileExist(const char *path);

/* DEBUG tools */
void Debug(void);
void DebugCwd(void);


#endif /* TOOLS_H */
