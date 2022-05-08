// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_SpreadPatternHelpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetPositionInGrid
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Width                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Height                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            X                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Y                              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::GetPositionInGrid(int Index, int Width, int Height, class UObject* __WorldContext, int* X, int* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetPositionInGrid"));

	struct
	{
		int                            Index;
		int                            Width;
		int                            Height;
		class UObject*                 __WorldContext;
		int                            X;
		int                            Y;
	} params = {};

	params.Index = Index;
	params.Width = Width;
	params.Height = Height;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.AddNoise
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MagnitudeInDegrees             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRangedRandomState RandomState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutDirection                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::AddNoise(const struct FVector& InDirection, float MagnitudeInDegrees, class UObject* __WorldContext, struct FTigerRangedRandomState* RandomState, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.AddNoise"));

	struct
	{
		struct FVector                 InDirection;
		float                          MagnitudeInDegrees;
		struct FTigerRangedRandomState RandomState;
		class UObject*                 __WorldContext;
		struct FVector                 OutDirection;
	} params = {};

	params.InDirection = InDirection;
	params.MagnitudeInDegrees = MagnitudeInDegrees;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (RandomState != nullptr)
		*RandomState = params.RandomState;
	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetSpreadRange
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShouldBeInsideSpreadRadius     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          NegativeSpreadInDegrees        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          PositiveSpreadInDegrees        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::GetSpreadRange(bool ShouldBeInsideSpreadRadius, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* NegativeSpreadInDegrees, float* PositiveSpreadInDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetSpreadRange"));

	struct
	{
		bool                           ShouldBeInsideSpreadRadius;
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		class UObject*                 __WorldContext;
		float                          NegativeSpreadInDegrees;
		float                          PositiveSpreadInDegrees;
	} params = {};

	params.ShouldBeInsideSpreadRadius = ShouldBeInsideSpreadRadius;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (NegativeSpreadInDegrees != nullptr)
		*NegativeSpreadInDegrees = params.NegativeSpreadInDegrees;
	if (PositiveSpreadInDegrees != nullptr)
		*PositiveSpreadInDegrees = params.PositiveSpreadInDegrees;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletsPerFire
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletCount                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::GetBulletsPerFire(class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, int* BulletCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletsPerFire"));

	struct
	{
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		class UObject*                 __WorldContext;
		int                            BulletCount;
	} params = {};

	params.RangedWeaponComponent = RangedWeaponComponent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (BulletCount != nullptr)
		*BulletCount = params.BulletCount;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSectionFloat
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          SectionStart                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          SectionEnd                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BulletProgress                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsInSection                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          ProgressInSection              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::GetBulletProgressInSectionFloat(float SectionStart, float SectionEnd, float BulletProgress, class UObject* __WorldContext, bool* IsInSection, float* ProgressInSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSectionFloat"));

	struct
	{
		float                          SectionStart;
		float                          SectionEnd;
		float                          BulletProgress;
		class UObject*                 __WorldContext;
		bool                           IsInSection;
		float                          ProgressInSection;
	} params = {};

	params.SectionStart = SectionStart;
	params.SectionEnd = SectionEnd;
	params.BulletProgress = BulletProgress;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsInSection != nullptr)
		*IsInSection = params.IsInSection;
	if (ProgressInSection != nullptr)
		*ProgressInSection = params.ProgressInSection;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionLeft
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Degrees                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutDirection                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::RotateDirectionLeft(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionLeft"));

	struct
	{
		struct FVector                 InDirection;
		float                          Degrees;
		class UObject*                 __WorldContext;
		struct FVector                 OutDirection;
	} params = {};

	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionRight
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Degrees                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutDirection                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::RotateDirectionRight(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionRight"));

	struct
	{
		struct FVector                 InDirection;
		float                          Degrees;
		class UObject*                 __WorldContext;
		struct FVector                 OutDirection;
	} params = {};

	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionDown
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Degrees                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutDirection                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::RotateDirectionDown(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionDown"));

	struct
	{
		struct FVector                 InDirection;
		float                          Degrees;
		class UObject*                 __WorldContext;
		struct FVector                 OutDirection;
	} params = {};

	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionUp
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 InDirection                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Degrees                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OutDirection                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::RotateDirectionUp(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionUp"));

	struct
	{
		struct FVector                 InDirection;
		float                          Degrees;
		class UObject*                 __WorldContext;
		struct FVector                 OutDirection;
	} params = {};

	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSection
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            BulletSectionStart             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletSectionEnd               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsInSection                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          Progress                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::GetBulletProgressInSection(int BulletSectionStart, int BulletSectionEnd, int BulletIndex, class UObject* __WorldContext, bool* IsInSection, float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSection"));

	struct
	{
		int                            BulletSectionStart;
		int                            BulletSectionEnd;
		int                            BulletIndex;
		class UObject*                 __WorldContext;
		bool                           IsInSection;
		float                          Progress;
	} params = {};

	params.BulletSectionStart = BulletSectionStart;
	params.BulletSectionEnd = BulletSectionEnd;
	params.BulletIndex = BulletIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsInSection != nullptr)
		*IsInSection = params.IsInSection;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgress
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            BulletIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerRangedWeaponComponent* RangedWeaponComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BulletProgress                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::GetBulletProgress(int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* BulletProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgress"));

	struct
	{
		int                            BulletIndex;
		class UTigerRangedWeaponComponent* RangedWeaponComponent;
		class UObject*                 __WorldContext;
		float                          BulletProgress;
	} params = {};

	params.BulletIndex = BulletIndex;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (BulletProgress != nullptr)
		*BulletProgress = params.BulletProgress;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionAlongLine
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          BeginYaw                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EndYaw                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          BeginPitch                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          EndPitch                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 AimDirection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::DirectionAlongLine(float BeginYaw, float EndYaw, float BeginPitch, float EndPitch, float Progress, const struct FVector& AimDirection, class UObject* __WorldContext, struct FVector* Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionAlongLine"));

	struct
	{
		float                          BeginYaw;
		float                          EndYaw;
		float                          BeginPitch;
		float                          EndPitch;
		float                          Progress;
		struct FVector                 AimDirection;
		class UObject*                 __WorldContext;
		struct FVector                 Direction;
	} params = {};

	params.BeginYaw = BeginYaw;
	params.EndYaw = EndYaw;
	params.BeginPitch = BeginPitch;
	params.EndPitch = EndPitch;
	params.Progress = Progress;
	params.AimDirection = AimDirection;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInCircle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 AimDirection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ProgressionZeroToOne           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadiusDegrees                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RotationOffset                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Point                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::DirectionInCircle(const struct FVector& AimDirection, float ProgressionZeroToOne, float RadiusDegrees, float RotationOffset, class UObject* __WorldContext, struct FVector* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInCircle"));

	struct
	{
		struct FVector                 AimDirection;
		float                          ProgressionZeroToOne;
		float                          RadiusDegrees;
		float                          RotationOffset;
		class UObject*                 __WorldContext;
		struct FVector                 Point;
	} params = {};

	params.AimDirection = AimDirection;
	params.ProgressionZeroToOne = ProgressionZeroToOne;
	params.RadiusDegrees = RadiusDegrees;
	params.RotationOffset = RotationOffset;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Point != nullptr)
		*Point = params.Point;
}


// Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInArc
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MinRotationDegrees             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          MaxRotationDegrees             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ProgressZeroToOne              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 AimDirection                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          RadiusDegrees                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Point                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_SpreadPatternHelpers_C::DirectionInArc(float MinRotationDegrees, float MaxRotationDegrees, float ProgressZeroToOne, const struct FVector& AimDirection, float RadiusDegrees, class UObject* __WorldContext, struct FVector* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInArc"));

	struct
	{
		float                          MinRotationDegrees;
		float                          MaxRotationDegrees;
		float                          ProgressZeroToOne;
		struct FVector                 AimDirection;
		float                          RadiusDegrees;
		class UObject*                 __WorldContext;
		struct FVector                 Point;
	} params = {};

	params.MinRotationDegrees = MinRotationDegrees;
	params.MaxRotationDegrees = MaxRotationDegrees;
	params.ProgressZeroToOne = ProgressZeroToOne;
	params.AimDirection = AimDirection;
	params.RadiusDegrees = RadiusDegrees;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Point != nullptr)
		*Point = params.Point;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
