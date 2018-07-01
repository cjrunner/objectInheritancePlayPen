//
//  thisGeneration.h
//  ObjectInheritancePlayPen
//
//  Created by Clifford Campo on 6/30/18.
//  Copyright © 2018 CliffordCampo. All rights reserved.
//

#ifndef thisGeneration_h
#define thisGeneration_h
#define CHILDGENERATION 2
#define PARENTGENERATION CHILDGENERATION - 1
#define GRANDPARENTGENERATION PARENTGENERATION -1
#define UNKNOWNBORN 0
#define FIRSTBORN 1
#define NEXTBORN 1 + FIRSTBORN
typedef   struct {
    const char *myName;
    unsigned int myGenerationNumber;
    unsigned short myBirthOrder;
} thisGeneration; 

#endif /* thisGeneration_h */
