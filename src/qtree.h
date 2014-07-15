/*  This file is part of MultirotorDrone.

    MultirotorDrone is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MultirotorDrone is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MultirotorDrone.  If not, see <http://www.gnu.org/licenses/>.
    */

/**
 * @file cv_main.h
 *
 * @brief Header for cv_main
 *
 * @author Fredrik Saevland <frs2@aber.ac.uk>
 * \copyright Copyright 2014 Fredrik Sævland. All rights reserved.
 *
 * @date 2014.03.10
 */

#ifndef QTREE_H
#define QTREE_H

#include "highgui.h"
#include "cv.h"

#define MAX_LVL 5 //Max depth, or resolution of quadify


typedef struct{
    int sx; //Start position in global image
    int sy;
    int x; //Dimension of section
    int y;

    int b; //bitwise pattern to repeat
    int g; //bitwise pattern to repeat
    int r; //bitwise pattern to repeat
} Section;

typedef struct {
    struct Q_node_t* root;
    int size;
    int depth;
} Q_tree;

typedef struct Q_point {

    } Q_point_t;

typedef struct Q_node {
    int level;

    enum{NW, NE, SW, SE} id;

    struct Q_node_t* parent;
    struct Q_node_t* nw;
    struct Q_node_t* ne;
    struct Q_node_t* sw;
    struct Q_node_t* se;

    Section* data;
} Q_node_t;

void quadify(IplImage*);
#endif

