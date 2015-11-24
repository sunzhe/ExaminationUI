//
//  UncaughtExceptionHandler.h
//  examinationTest
//
//  Created by ioszhe on 15/11/23.
//  Copyright © 2015年 ioszhe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include <libkern/OSAtomic.h>
#include <execinfo.h>

@interface UncaughtExceptionHandler : NSObject{
    BOOL dismissed;
}
+(void) InstallUncaughtExceptionHandler;

//利用 NSSetUncaughtExceptionHandler，当程序异常退出的时候，可以先进行处理，然后做一些自定义的动作，比如下面一段代码，就是网上有人写的，直接在发生异常时给某人发送邮件，</span>
void UncaughtExceptionHandlers (NSException *exception);
@end