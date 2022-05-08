// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TutorialPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.HideContextualGas
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::HideContextualGas()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.HideContextualGas"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ShowContextualGas
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::ShowContextualGas()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ShowContextualGas"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.IsInInvulnerableState
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_TutorialPlayer_C::IsInInvulnerableState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.IsInInvulnerableState"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnHeightenedSensesToggled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsActive                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_TutorialPlayer_C::Example_OnHeightenedSensesToggled(bool bIsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnHeightenedSensesToggled"));

	struct
	{
		bool                           bIsActive;
	} params = {};

	params.bIsActive = bIsActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnInventoryToggled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::Example_OnInventoryToggled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnInventoryToggled"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnItemPickedUp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::Example_OnItemPickedUp(class UTigerItemAsset* Item, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnItemPickedUp"));

	struct
	{
		class UTigerItemAsset*         Item;
		int                            Count;
	} params = {};

	params.Item = Item;
	params.Count = Count;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTargetSuccessfullyHitWithMelee
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::Example_OnTargetSuccessfullyHitWithMelee(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTargetSuccessfullyHitWithMelee"));

	struct
	{
		class AActor*                  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTargetSuccessfullyShot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::Example_OnTargetSuccessfullyShot(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTargetSuccessfullyShot"));

	struct
	{
		class AActor*                  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnSuccessfulBlock
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::Example_OnSuccessfulBlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnSuccessfulBlock"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnAttack
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsHeavyAttack                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_TutorialPlayer_C::Example_OnAttack(bool bIsHeavyAttack)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnAttack"));

	struct
	{
		bool                           bIsHeavyAttack;
	} params = {};

	params.bIsHeavyAttack = bIsHeavyAttack;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTargetShot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         Shot_Target                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::Example_OnTargetShot(class ATigerCharacter* Shot_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTargetShot"));

	struct
	{
		class ATigerCharacter*         Shot_Target;
	} params = {};

	params.Shot_Target = Shot_Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnFeedingCompleted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTargetIsDrained               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_TutorialPlayer_C::Example_OnFeedingCompleted(bool bTargetIsDrained)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnFeedingCompleted"));

	struct
	{
		bool                           bTargetIsDrained;
	} params = {};

	params.bTargetIsDrained = bTargetIsDrained;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnStartedFeeding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::Example_OnStartedFeeding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnStartedFeeding"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnStoppedFeeding
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bWasAttacked                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_TutorialPlayer_C::Example_OnStoppedFeeding(bool bWasAttacked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnStoppedFeeding"));

	struct
	{
		bool                           bWasAttacked;
	} params = {};

	params.bWasAttacked = bWasAttacked;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTutorialPlayerDodged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::Example_OnTutorialPlayerDodged(const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.Example_OnTutorialPlayerDodged"));

	struct
	{
		struct FVector                 Direction;
	} params = {};

	params.Direction = Direction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveUnpossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             OldController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveUnpossessed"));

	struct
	{
		class AController*             OldController;
	} params = {};

	params.OldController = OldController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceivePossessed"));

	struct
	{
		class AController*             NewController;
	} params = {};

	params.NewController = NewController;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWallJump
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::OnWallJump(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWallJump"));

	struct
	{
		struct FVector                 InVelocity;
	} params = {};

	params.InVelocity = InVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.K2_OnStartCrouch
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ScaledHalfHeightAdjust         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.K2_OnStartCrouch"));

	struct
	{
		float                          HalfHeightAdjust;
		float                          ScaledHalfHeightAdjust;
	} params = {};

	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbStarted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::OnClimbStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbStarted"));

	struct
	{
		struct FVector                 InVelocity;
	} params = {};

	params.InVelocity = InVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbEnded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::OnClimbEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbEnded"));

	struct
	{
		struct FVector                 InVelocity;
	} params = {};

	params.InVelocity = InVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnDisciplineUseSucceeded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDisciplineUse          DisciplineUse                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_TutorialPlayer_C::OnDisciplineUseSucceeded(const struct FDisciplineUse& DisciplineUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnDisciplineUseSucceeded"));

	struct
	{
		struct FDisciplineUse          DisciplineUse;
	} params = {};

	params.DisciplineUse = DisciplineUse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnJumped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnJumped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnJumped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWeaponFired
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSecondaryWeaponFired          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_TutorialPlayer_C::OnWeaponFired(bool bSecondaryWeaponFired)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWeaponFired"));

	struct
	{
		bool                           bSecondaryWeaponFired;
	} params = {};

	params.bSecondaryWeaponFired = bSecondaryWeaponFired;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlidingStarted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::OnSlidingStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlidingStarted"));

	struct
	{
		struct FVector                 InVelocity;
	} params = {};

	params.InVelocity = InVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlidingEnded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::OnSlidingEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlidingEnded"));

	struct
	{
		struct FVector                 InVelocity;
	} params = {};

	params.InVelocity = InVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnDoubleJump
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::OnDoubleJump(const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnDoubleJump"));

	struct
	{
		struct FVector                 Direction;
	} params = {};

	params.Direction = Direction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ApplyDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::ApplyDamage()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ApplyDamage"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveAnyDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReceiveAnyDamage"));

	struct
	{
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params = {};

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ExecuteUbergraph_TBP_TutorialPlayer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::ExecuteUbergraph_TBP_TutorialPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ExecuteUbergraph_TBP_TutorialPlayer"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlideEndedDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnSlideEndedDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlideEndedDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWeaponFiredDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnWeaponFiredDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWeaponFiredDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlideStartDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnSlideStartDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnSlideStartDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnJumpDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnJumpDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnJumpDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnDisciplineUseDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDisciplineUse          DisciplineUse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ATBP_TutorialPlayer_C::OnDisciplineUseDispatcher__DelegateSignature(const struct FDisciplineUse& DisciplineUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnDisciplineUseDispatcher__DelegateSignature"));

	struct
	{
		struct FDisciplineUse          DisciplineUse;
	} params = {};

	params.DisciplineUse = DisciplineUse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbEndedDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnClimbEndedDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbEndedDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbStartDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnClimbStartDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnClimbStartDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnCrouchDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnCrouchDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnCrouchDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnAirDashDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnAirDashDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnAirDashDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWallJumpDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_TutorialPlayer_C::OnWallJumpDispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.OnWallJumpDispatcher__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReportSuccessfulMeleeAttack__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::ReportSuccessfulMeleeAttack__DelegateSignature(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReportSuccessfulMeleeAttack__DelegateSignature"));

	struct
	{
		class AActor*                  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReportSuccessfullyShot__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_TutorialPlayer_C::ReportSuccessfullyShot__DelegateSignature(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_TutorialPlayer.TBP_TutorialPlayer_C.ReportSuccessfullyShot__DelegateSignature"));

	struct
	{
		class AActor*                  Target;
	} params = {};

	params.Target = Target;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
