/* This file is part of the KDE project

   Copyright (C) 2006 Jan Hambrecht <jaham@gmx.net>
   Copyright (C) 2006 Thomas Zander <zander@kde.org>
   Copyright (C) 2008 Casper Boemann <cbr@boemann.dk>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
*/

#ifndef KODATACENTER_H
#define KODATACENTER_H

#include <QtGlobal>

class KoStore;
class KoXmlWriter;
/**
 * The data center is for now just a sort of void pointer.
 * The data centers can be stuff like image collection, or stylemanager.
 * This abstraction is done so that shapes can get access to any possible type of data center.
 * The KoShapeControillerBase has a method that returns a map of data centers
 */
class KoDataCenter {
public:
    KoDataCenter() { }
    virtual ~KoDataCenter() { }

    /**
     * Load any remaining binary blobs needed
     */
    virtual bool completeLoading(KoStore *store) = 0;

    /**
     * Save any remaining binary blobs
     */
    virtual bool completeSaving(KoStore *store, KoXmlWriter * manifestWriter ) = 0;
};

#endif
