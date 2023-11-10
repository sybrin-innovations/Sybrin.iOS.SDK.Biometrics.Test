#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef SYBRIN_IOS_BIOMETRICS_SWIFT_H
#define SYBRIN_IOS_BIOMETRICS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import Sybrin_iOS_Common;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Sybrin_iOS_Biometrics",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class UIImage;
@class NSString;

SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics15BiometricsModel")
@interface BiometricsModel : NSObject
@property (nonatomic, readonly, strong) UIImage * _Nullable selfieImage;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedSelfieImage;
@property (nonatomic, readonly, copy) NSString * _Nullable selfieImagePath;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedSelfieImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics22LivenessDetectionModel")
@interface LivenessDetectionModel : BiometricsModel
@property (nonatomic, readonly) BOOL isAlive;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class LivenessDetectionQuestion;

SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics28ActiveLivenessDetectionModel")
@interface ActiveLivenessDetectionModel : LivenessDetectionModel
@property (nonatomic, readonly, copy) NSArray<LivenessDetectionQuestion *> * _Nonnull livenessDetectionQuestions;
- (NSArray<UIImage *> * _Nonnull)actionImages SWIFT_WARN_UNUSED_RESULT;
- (NSArray<UIImage *> * _Nonnull)focusImages SWIFT_WARN_UNUSED_RESULT;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics35ActivePassiveLivenessDetectionModel")
@interface ActivePassiveLivenessDetectionModel : LivenessDetectionModel
@property (nonatomic, readonly) float livenessConfidence;
@property (nonatomic, readonly, copy) NSArray<LivenessDetectionQuestion *> * _Nonnull livenessDetectionQuestions;
- (NSArray<UIImage *> * _Nonnull)actionImages SWIFT_WARN_UNUSED_RESULT;
- (NSArray<UIImage *> * _Nonnull)focusImages SWIFT_WARN_UNUSED_RESULT;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics25LivenessDetectionQuestion")
@interface LivenessDetectionQuestion : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull actionLabel;
@property (nonatomic, readonly) BOOL actionCompleted;
@property (nonatomic, readonly, strong) UIImage * _Nullable actionImage;
@property (nonatomic, readonly, copy) NSString * _Nullable actionImagePath;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedActionImage;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedActionImagePath;
@property (nonatomic, readonly, copy) NSString * _Nonnull focusLabel;
@property (nonatomic, readonly) BOOL focusCompleted;
@property (nonatomic, readonly, strong) UIImage * _Nullable focusImage;
@property (nonatomic, readonly, copy) NSString * _Nullable focusImagePath;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedFocusImage;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedFocusImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics30BlinkLivenessDetectionQuestion")
@interface BlinkLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics29DefaultLivenessTrainingAction")
@interface DefaultLivenessTrainingAction : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics31FacialTrainingActionOnDetection")
@interface FacialTrainingActionOnDetection : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull actionLabel;
@property (nonatomic, readonly) BOOL actionCompleted;
@property (nonatomic, readonly, strong) UIImage * _Nullable actionImage;
@property (nonatomic, readonly, copy) NSString * _Nullable actionImagePath;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedActionImage;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedActionImagePath;
@property (nonatomic, readonly, copy) NSString * _Nonnull focusLabel;
@property (nonatomic, readonly) BOOL focusCompleted;
@property (nonatomic, readonly, strong) UIImage * _Nullable focusImage;
@property (nonatomic, readonly, copy) NSString * _Nullable focusImagePath;
@property (nonatomic, readonly, strong) UIImage * _Nullable croppedFocusImage;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedFocusImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics21DefaultTrainingAction")
@interface DefaultTrainingAction : FacialTrainingActionOnDetection
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class FacialComparisonResult;

SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics21FacialComparisonModel")
@interface FacialComparisonModel : NSObject
@property (nonatomic, readonly) double averageConfidence;
@property (nonatomic, readonly, strong) UIImage * _Nullable targetImage;
@property (nonatomic, readonly, copy) NSString * _Nullable targetImagePath;
@property (nonatomic, readonly, copy) NSArray<FacialComparisonResult *> * _Nullable faceResults;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics22FacialComparisonResult")
@interface FacialComparisonResult : NSObject
@property (nonatomic, readonly) BOOL result;
@property (nonatomic, readonly, copy) NSString * _Nonnull message;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double timeTakenMilliseconds;
@property (nonatomic, readonly, copy) NSString * _Nullable targetName;
@property (nonatomic, readonly, copy) NSString * _Nullable faceName;
@property (nonatomic, readonly, strong) UIImage * _Nullable faceImage;
@property (nonatomic, readonly, copy) NSString * _Nullable faceImagePath;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics36FacialRecognitionInitializationModel")
@interface FacialRecognitionInitializationModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
@property (nonatomic, readonly) float timeTakenMilliseconds;
@property (nonatomic, readonly) BOOL modelDownloaded;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics22FacialRecognitionModel")
@interface FacialRecognitionModel : BiometricsModel
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
@property (nonatomic, readonly, strong) UIImage * _Nonnull recognizedImage;
@property (nonatomic, readonly, copy) NSString * _Nullable recognizedImagePath;
@property (nonatomic, readonly, strong) UIImage * _Nonnull croppedRecognizedImage;
@property (nonatomic, readonly, copy) NSString * _Nullable croppedRecognizedImagePath;
@property (nonatomic, readonly) float confidence;
- (void)saveImages;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics30FacialRecognitionTrainingModel")
@interface FacialRecognitionTrainingModel : LivenessDetectionModel
@property (nonatomic, readonly, copy) NSArray<FacialTrainingActionOnDetection *> * _Nonnull livenessDetectionQuestions;
- (NSArray<UIImage *> * _Nonnull)actionImages SWIFT_WARN_UNUSED_RESULT;
- (NSArray<UIImage *> * _Nonnull)focusImages SWIFT_WARN_UNUSED_RESULT;
- (void)saveImages;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics19FacialTrainingModel")
@interface FacialTrainingModel : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
@property (nonatomic, readonly) double trainingTimeTakenMilliseconds;
@property (nonatomic, readonly) double uploadTimeTakenMilliseconds;
@property (nonatomic, readonly, copy) NSArray<UIImage *> * _Nonnull trainedImages;
@property (nonatomic, readonly) BOOL uploaded;
- (void)uploadModelWithSuccess:(void (^ _Nullable)(double))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics33LookDownLivenessDetectionQuestion")
@interface LookDownLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics31LookUpLivenessDetectionQuestion")
@interface LookUpLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics29PassiveLivenessDetectionModel")
@interface PassiveLivenessDetectionModel : LivenessDetectionModel
@property (nonatomic, readonly) float livenessConfidence;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics30SmileLivenessDetectionQuestion")
@interface SmileLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SybrinBiometricsConfiguration;
@class UIViewController;

SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics16SybrinBiometrics")
@interface SybrinBiometrics : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SybrinBiometrics * _Nonnull shared;)
+ (SybrinBiometrics * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) SybrinBiometricsConfiguration * _Nullable configuration;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)changeLogLevelTo:(enum LogLevel)logLevel;
- (void)openActiveLivenessDetectionOn:(UIViewController * _Nonnull)viewController actions:(NSArray<LivenessDetectionQuestion *> * _Nullable)actions doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(ActiveLivenessDetectionModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)openFacialRecognitionTrainingOn:(UIViewController * _Nonnull)viewController actions:(NSArray<FacialTrainingActionOnDetection *> * _Nullable)actions doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(FacialRecognitionTrainingModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)openActivePassiveLivenessDetectionOn:(UIViewController * _Nonnull)viewController actions:(NSArray<LivenessDetectionQuestion *> * _Nullable)actions doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(ActivePassiveLivenessDetectionModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)openPassiveLivenessDetectionOn:(UIViewController * _Nonnull)viewController doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(PassiveLivenessDetectionModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)passiveLivenessDetectionFromImageWithImage:(UIImage * _Nonnull)image success:(void (^ _Nullable)(PassiveLivenessDetectionModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure;
- (void)compareFaces:(UIImage * _Nonnull)target :(NSArray<UIImage *> * _Nonnull)faces success:(void (^ _Nullable)(FacialComparisonModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure;
- (void)trainFaceOn:(UIViewController * _Nonnull)viewController for:(NSString * _Nonnull)identifier success:(void (^ _Nullable)(FacialTrainingModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
- (void)loadModelFor:(NSString * _Nonnull)identifier success:(void (^ _Nullable)(FacialRecognitionInitializationModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure;
- (void)openFacialRecognitionOn:(UIViewController * _Nonnull)viewController for:(NSString * _Nonnull)identifier doneLaunching:(void (^ _Nullable)(BOOL, NSString * _Nullable))doneLaunching success:(void (^ _Nullable)(FacialRecognitionModel * _Nonnull))success failure:(void (^ _Nullable)(NSString * _Nonnull))failure cancel:(void (^ _Nullable)(void))cancel;
@end


@class UIColor;

SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics29SybrinBiometricsConfiguration")
@interface SybrinBiometricsConfiguration : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull license;
@property (nonatomic, strong) UIColor * _Nonnull overlayColor;
@property (nonatomic, strong) UIColor * _Nonnull overlayLabelTextColor;
@property (nonatomic, strong) UIColor * _Nonnull overlaySubLabelTextColor;
@property (nonatomic, strong) UIColor * _Nonnull overlayBorderColor;
@property (nonatomic) CGFloat overlayBorderThickness;
@property (nonatomic) CGFloat overlayBorderLength;
@property (nonatomic) enum UIBlurEffectStyle overlayBlurStyle;
@property (nonatomic) CGFloat overlayBlurIntensity;
@property (nonatomic) enum AVCaptureDevicePosition cameraPosition;
@property (nonatomic, copy) NSString * _Nonnull environmentKey;
@property (nonatomic, copy) NSString * _Nonnull overlayBrandingTitleText;
@property (nonatomic, strong) UIColor * _Nonnull overlayBrandingTitleColor;
@property (nonatomic, copy) NSString * _Nonnull overlayBrandingSubtitleText;
@property (nonatomic, strong) UIColor * _Nonnull overlayBrandingSubtitleColor;
@property (nonatomic) BOOL enableBackButton;
@property (nonatomic) BOOL enableSwipeRightGesture;
@property (nonatomic) BOOL showFlashButton;
@property (nonatomic, copy) NSString * _Nullable correlationID;
@property (nonatomic) BOOL displayToastMessages;
@property (nonatomic) BOOL saveImages;
@property (nonatomic) BOOL enableOfflinePassiveLiveness;
@property (nonatomic, copy) NSString * _Nullable customAuthorizationToken;
- (nonnull instancetype)initWithLicense:(NSString * _Nonnull)license OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics37TiltHeadLeftLivenessDetectionQuestion")
@interface TiltHeadLeftLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics38TiltHeadRightLivenessDetectionQuestion")
@interface TiltHeadRightLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics37TurnHeadLeftLivenessDetectionQuestion")
@interface TurnHeadLeftLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC21Sybrin_iOS_Biometrics38TurnHeadRightLivenessDetectionQuestion")
@interface TurnHeadRightLivenessDetectionQuestion : LivenessDetectionQuestion
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end





#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
