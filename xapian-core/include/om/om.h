/* om.h: Include all externally visible parts of om
 *
 * ----START-LICENCE----
 * Copyright 1999,2000 BrightStation PLC
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 * -----END-LICENCE-----
 */

#ifndef OM_HGUARD_OM_H
#define OM_HGUARD_OM_H

/* Types and exceptions */
#include "omtypes.h"
#include "omerror.h"
#include "omerrorhandler.h"

/* Settings/Options */
#include "omsettings.h"

/* Data access */
#include "omdocument.h"
#include "omdatabase.h"
#include "ompostlistiterator.h"
#include "ompositionlistiterator.h"
#include "omtermlistiterator.h"

/* Searching */
#include "omenquire.h"

/* Indexing */
#include "omindexer.h"
#include "omindexerbuilder.h"
#include "omindexercommon.h"
#include "omindexerdesc.h"

/* Extending the indexing system */
#include "omindexermessage.h"
#include "omindexernode.h"
#include "omnodedescriptor.h"

/* Stemming */
#include "omstem.h"

/* Output */
#include "omoutput.h"

#endif /* OM_HGUARD_OM_H */
