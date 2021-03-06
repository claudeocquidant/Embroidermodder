#ifndef FORMAT_EXY_H
#define FORMAT_EXY_H

#ifdef __cplusplus
extern "C" {
#endif

#include "emb-pattern.h"

int readExy(EmbPattern* pattern, const char* fileName);
int writeExy(EmbPattern* pattern, const char* fileName);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* FORMAT_EXY_H */

/* kate: bom off; indent-mode cstyle; indent-width 4; replace-trailing-space-save on; */
