//
//  MyClass.h
//  RCSIphone
//
//  Created by kiodo on 02/03/12.
//  Copyright 2012 HT srl. All rights reserved.
//

#import "RCSIEvent.h"

@interface RCSIEventProcess : RCSIEvent
{
  NSString *processName;
}

@property (readwrite, retain) NSString *processName;

@end

