/*
 *  Copyright (c) 2016 Dmitry Kazakov <dimula73@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __KIS_ROUNDMARKEROP_SETTINGS_H
#define __KIS_ROUNDMARKEROP_SETTINGS_H

#include <QScopedPointer>
#include <kis_paintop_settings.h>
#include <kis_outline_generation_policy.h>


class KisRoundMarkerOpSettings : public KisOutlineGenerationPolicy<KisPaintOpSettings>
{
public:
    KisRoundMarkerOpSettings();
    ~KisRoundMarkerOpSettings();

    bool paintIncremental() Q_DECL_OVERRIDE;

    qreal paintOpSize() const Q_DECL_OVERRIDE;
    void setPaintOpSize(qreal value) Q_DECL_OVERRIDE;

    QPainterPath brushOutline(const KisPaintInformation &info, OutlineMode mode) Q_DECL_OVERRIDE;

    QList<KisUniformPaintOpPropertySP> uniformProperties() Q_DECL_OVERRIDE;

private:
    struct Private;
    const QScopedPointer<Private> m_d;
};

#endif /* __KIS_ROUNDMARKEROP_SETTINGS_H */
