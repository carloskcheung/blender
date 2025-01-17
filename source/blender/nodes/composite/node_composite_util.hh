/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2006 Blender Foundation.
 * All rights reserved.
 */

/** \file
 * \ingroup nodes
 */

#pragma once

#include "DNA_ID.h"
#include "DNA_movieclip_types.h"
#include "DNA_node_types.h"

#include "BLT_translation.h"

#include "BKE_colorband.h"
#include "BKE_colortools.h"
#include "BKE_image.h"
#include "BKE_texture.h"
#include "BKE_tracking.h"

#include "node_util.h"

#include "IMB_imbuf.h"
#include "IMB_imbuf_types.h"

#include "RE_pipeline.h"

/* only for forward declarations */
#include "NOD_composite.h"
#include "NOD_socket_declarations.hh"

#define CMP_SCALE_MAX 12000

bool cmp_node_poll_default(struct bNodeType *ntype,
                           struct bNodeTree *ntree,
                           const char **r_disabled_hint);
void cmp_node_update_default(struct bNodeTree *ntree, struct bNode *node);
void cmp_node_type_base(
    struct bNodeType *ntype, int type, const char *name, short nclass, short flag);
