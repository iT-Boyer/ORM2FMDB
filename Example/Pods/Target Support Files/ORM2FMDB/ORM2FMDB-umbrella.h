#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BCDB.h"
#import "BCORMEntityProtocol.h"
#import "BCORMHeader.h"
#import "BCORMHelper.h"
#import "BCSqlParameter.h"
#import "BCConstraints.h"
#import "BCReferences.h"
#import "BCSqlInt.h"
#import "BCSqliteType.h"
#import "BCSqlReal.h"
#import "BCSqlText.h"

FOUNDATION_EXPORT double ORM2FMDBVersionNumber;
FOUNDATION_EXPORT const unsigned char ORM2FMDBVersionString[];

