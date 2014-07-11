/* 
 * File:   Transducer.h
 * Author: benwu
 *
 * Created on July 11, 2014, 11:05 PM
 */

#ifndef TRANSDUCER_H
#define	TRANSDUCER_H

class Transducer {
public:
    double virtual popNextPressurePsiValue() = 0;
};

#endif	/* TRANSDUCER_H */

