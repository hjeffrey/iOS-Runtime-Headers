/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CILightTunnel : CIFilter  {
    CIImage *inputImage;
    CIVector *inputPoint;
    NSNumber *inputRotation;
    NSNumber *inputRadius;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint;
@property(copy) NSNumber * inputRotation;
@property(copy) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)inputRotation;
- (void)setInputRotation:(id)arg1;
- (void)setInputPoint:(id)arg1;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)inputPoint;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end
