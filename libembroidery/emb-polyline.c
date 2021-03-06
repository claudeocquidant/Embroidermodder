#include "emb-polyline.h"

int embPolyline_count(EmbPolylineObjectList* pointer)
{
    int i = 0;
    if(!pointer) return 0;
    while(pointer->next)
    {
        pointer = pointer->next;
        i++;
    }
    return i;
}

int embPolyline_empty(EmbPolylineObjectList* pointer)
{
    return pointer == 0;
}

/* kate: bom off; indent-mode cstyle; indent-width 4; replace-trailing-space-save on; */
