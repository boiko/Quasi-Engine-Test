/**
 * Copyright (C) 2012 by INdT
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * @author Rodrigo Goncalves de Oliveira <rodrigo.goncalves@openbossa.org>
 * @author Roger Felipe Zanoni da Silva <roger.zanoni@openbossa.org>
 */

#ifndef _ENUMS_H_
#define _ENUMS_H_

#include <QtCore/QObject>

class Quasi : public QObject {
    Q_OBJECT

    Q_ENUMS (
        LayerType
        LayerDirection
        DrawType
        Ordering
        BodyShape
        BodyType
    )

public:
    // Used on Layer
    enum LayerType {
        InfiniteType,
        MirroredType
    };

    // Used on Layer
    enum LayerDirection {
        BackwardDirection = 0, // -1 returns undefined on QML :(
        ForwardDirection = 1
    };

    // Used on GameLayers
    enum DrawType {
        PlaneDrawType,
        TiledDrawType
    };

    // This is for the use of Layers and Items
    enum Ordering {
        // These enums defines the z order of the background layers
        BackgroundLayerOrdering_01 = 0,
        BackgroundLayerOrdering_02 = 1,
        BackgroundLayerOrdering_03 = 2,
        // These enums defines the z order of the interaction layers
        InteractionLayerOrdering_01 = 4,
        InteractionLayerOrdering_02 = 5,
        InteractionLayerOrdering_03 = 6,
        // These enums defines the z order of the game entities
        EntityOrdering_01 = InteractionLayerOrdering_01,
        EntityOrdering_02 = InteractionLayerOrdering_02,
        EntityOrdering_03 = InteractionLayerOrdering_03,
        // These enums defines the z order of the foreground layers
        ForegroundLayerOrdering_01 = 7,
        ForegroundLayerOrdering_02 = 8,
        ForegroundLayerOrdering_03 = 9
    };

    // Enums for the Box2D body shapes
    enum BodyShape {
        RectangleBodyShape,
        PolygonBodyShape,
        CircleBodyShape,
        ChainBodyShape
    };


    // Enums for the Box2D body types
    enum BodyType {
        StaticBodyType,
        KinematicBodyType,
        DynamicBodyType
    };

    // Internal use onlu, not exported to QML
    enum Internal {
        // Box2D debug mode
        MaxOrdering = 9999
    };
};

#endif /* _ENUMS_H_ */
