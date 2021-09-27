//
//  HYSDoctorSDK.h
//  HYSDoctor
//
//  Created by rmjk on 2021/9/9.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, HYSDoctorCallAgeType) {
    HYSDoctorCallAgeTypeChild,
    HYSDoctorCallAgeTypeAdult,
};

NS_ASSUME_NONNULL_BEGIN

@interface HYSDoctorSDK : NSObject

@property (nonatomic, assign) BOOL isLogined;

+ (instancetype)shared;

- (void)initWithProductId:(NSString *)productId enableLog:(BOOL)enableLog isDevelop:(BOOL)isDevelop;

- (void)loginWithUserToken:(NSString *)token completion:(void (^ _Nonnull)(NSError * _Nullable))completion;

- (void)startCallWithAgeType:(HYSDoctorCallAgeType)ageType;

- (NSString *)getMedicListWithUserToken:(NSString *)token;

- (void)logout:(void (^ _Nullable)(NSString * _Nullable))callback;

@end

NS_ASSUME_NONNULL_END
