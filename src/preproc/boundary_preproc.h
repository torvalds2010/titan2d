/*******************************************************************
 * Copyright (C) 2003 University at Buffalo
 *
 * This software can be redistributed free of charge.  See COPYING
 * file in the top distribution directory for more details.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Author: 
 * Description: 
 *
 *******************************************************************
 * $Id: boundary.h 12 2003-11-07 17:58:49Z kdalbey $ 
 */

#ifndef BOUNDARY_PREPROC_H
#define BOUNDARY_PREPROC_H
#include "node_preproc.h"

class BoundaryPreproc
{
    
    friend class ElementPreproc;

public:
    
    BoundaryPreproc();
    void setparameters(NodePreproc*, double, double, int);
    NodePreproc* get_boundary_node()
    {
        return node;
    }
    ;
    int get_type()
    {
        return type;
    }
    ;
    double get_x_value()
    {
        return x_value;
    }
    ;
    double get_y_value()
    {
        return y_value;
    }
    ;
    void write_b_data(ofstream*);
    void write_b_data_bin(FILE *);

private:
    NodePreproc* node;
    int type; //-2 essential -3 natural
    double x_value;
    double y_value;
    
};
#endif
