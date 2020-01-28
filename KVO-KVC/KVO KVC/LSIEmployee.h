//
//  LSIEmployee.h
//  KVO KVC Demo
//
//  Created by Paul Solt on 4/9/19.
//  Copyright © 2019 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LSIEmployee.h"

//@interface LSIEmployee ()
//@property (nonatomic, copy) NSString *privateName;
//@end

@interface LSIEmployee : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *jobTitle;
@property (nonatomic) NSInteger salary;

@end


