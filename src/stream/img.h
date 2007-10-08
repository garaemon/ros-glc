/**
 * \file src/stream/img.h
 * \brief export to images
 * \author Pyry Haulos <pyry.haulos@gmail.com>
 * \date 2007
 */


/* img.h -- export to images
 * Copyright (C) 2007 Pyry Haulos
 * For conditions of distribution and use, see copyright notice in glc.h
 */

/**
 * \addtogroup img
 *  \{
 */

#ifndef _IMG_H
#define _IMG_H

#include <packetstream.h>
#include "../common/glc.h"

int img_init(glc_t *glc, ps_buffer_t *from);

#endif

/**  \} */
