// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Player.TBP_Player_C.GetWeapon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  OutWeapon                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USkeletalMeshComponent*  OutSecondWeapon                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::GetWeapon(class USkeletalMeshComponent** OutWeapon, class USkeletalMeshComponent** OutSecondWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.GetWeapon"));

	struct
	{
		class USkeletalMeshComponent*  OutWeapon;
		class USkeletalMeshComponent*  OutSecondWeapon;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutWeapon != nullptr)
		*OutWeapon = params.OutWeapon;
	if (OutSecondWeapon != nullptr)
		*OutSecondWeapon = params.OutSecondWeapon;
}


// Function TBP_Player.TBP_Player_C.EnablePostProcesses
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::EnablePostProcesses()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.EnablePostProcesses"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Collect Post Processes Enabled by Default
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::Collect_Post_Processes_Enabled_by_Default()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Collect Post Processes Enabled by Default"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.QualityOptionChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerGraphicsSettings  GraphicsSettings               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerGraphicsSettingsPS5 GraphicsSettingsPS5            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ATBP_Player_C::QualityOptionChanged(const struct FTigerGraphicsSettings& GraphicsSettings, const struct FTigerGraphicsSettingsPS5& GraphicsSettingsPS5)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.QualityOptionChanged"));

	struct
	{
		struct FTigerGraphicsSettings  GraphicsSettings;
		struct FTigerGraphicsSettingsPS5 GraphicsSettingsPS5;
	} params = {};

	params.GraphicsSettings = GraphicsSettings;
	params.GraphicsSettingsPS5 = GraphicsSettingsPS5;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.HandleFeedingStopForAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::HandleFeedingStopForAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.HandleFeedingStopForAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Handle Feeding Start for Audio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::Handle_Feeding_Start_for_Audio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Handle Feeding Start for Audio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetShieldShaderParameters
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SetShieldShaderParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetShieldShaderParameters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.HandleRedGasProximityAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::HandleRedGasProximityAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.HandleRedGasProximityAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetupBodyPartPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SetupBodyPartPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetupBodyPartPrimitiveData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.PostFlybyAudio
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_RangedWeaponCategories> Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAkAudioEvent*           AkEvent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::PostFlybyAudio(TEnumAsByte<ENUM_RangedWeaponCategories> Key, const struct FVector& Location, class UAkAudioEvent* AkEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.PostFlybyAudio"));

	struct
	{
		TEnumAsByte<ENUM_RangedWeaponCategories> Key;
		struct FVector                 Location;
		class UAkAudioEvent*           AkEvent;
	} params = {};

	params.Key = Key;
	params.Location = Location;
	params.AkEvent = AkEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SendArchetypeToMaterial
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SendArchetypeToMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SendArchetypeToMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetCullCustomDepth
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InValue                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Player_C::SetCullCustomDepth(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetCullCustomDepth"));

	struct
	{
		bool                           InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetUpMasqueradeAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SetUpMasqueradeAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetUpMasqueradeAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnRedGasPostProcessMaterialLoaded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UObject*>         InLoadedObjects                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_Player_C::OnRedGasPostProcessMaterialLoaded(TArray<class UObject*> InLoadedObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnRedGasPostProcessMaterialLoaded"));

	struct
	{
		TArray<class UObject*>         InLoadedObjects;
	} params = {};

	params.InLoadedObjects = InLoadedObjects;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetupQualityOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SetupQualityOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetupQualityOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.InitHealthBars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::InitHealthBars()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.InitHealthBars"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UpdateSPCPlayerMaterialCollection
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::UpdateSPCPlayerMaterialCollection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateSPCPlayerMaterialCollection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Update Red Gas MPC
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::Update_Red_Gas_MPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Update Red Gas MPC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.StartRedGasAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::StartRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.StartRedGasAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.StopRedGasAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::StopRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.StopRedGasAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.CheckShouldUpdateListenerPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerController*       Player_Controller              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_Player_C::CheckShouldUpdateListenerPosition(class APlayerController* Player_Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.CheckShouldUpdateListenerPosition"));

	struct
	{
		class APlayerController*       Player_Controller;
		bool                           ReturnValue;
	} params = {};

	params.Player_Controller = Player_Controller;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Player.TBP_Player_C.EnableCharacterlighting
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::EnableCharacterlighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.EnableCharacterlighting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetLodOnLocalPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SetLodOnLocalPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetLodOnLocalPlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetAudioListenerOverride
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SetAudioListenerOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetAudioListenerOverride"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetDamageTakenAudioSwitch
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::SetDamageTakenAudioSwitch(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetDamageTakenAudioSwitch"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.StartSlidingAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::StartSlidingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.StartSlidingAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.DetermineOwnerOfProjectile
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerProjectile*        AsTiger_Projectile             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::DetermineOwnerOfProjectile(class UObject* Object, class ATigerProjectile** AsTiger_Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.DetermineOwnerOfProjectile"));

	struct
	{
		class UObject*                 Object;
		class ATigerProjectile*        AsTiger_Projectile;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsTiger_Projectile != nullptr)
		*AsTiger_Projectile = params.AsTiger_Projectile;
}


// Function TBP_Player.TBP_Player_C.SetRTPC:AltitudePlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SetRTPC_AltitudePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetRTPC:AltitudePlayer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetReverbStateOnExit
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::SetReverbStateOnExit(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetReverbStateOnExit"));

	struct
	{
		class UObject*                 Object;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetReverbStateOnEnter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::SetReverbStateOnEnter(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetReverbStateOnEnter"));

	struct
	{
		class UObject*                 Object;
	} params = {};

	params.Object = Object;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.DisableScreenCullSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::DisableScreenCullSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.DisableScreenCullSize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.PostLandingAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::PostLandingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.PostLandingAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.PlayBeingDiablerizedAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::PlayBeingDiablerizedAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.PlayBeingDiablerizedAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.PlayDiablerizeAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::PlayDiablerizeAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.PlayDiablerizeAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.PlayReviveAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::PlayReviveAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.PlayReviveAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.DisableAllPostProcess
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::DisableAllPostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.DisableAllPostProcess"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.StopCloseToRedGasAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::StopCloseToRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.StopCloseToRedGasAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.StartCloseToRedGasAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::StartCloseToRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.StartCloseToRedGasAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnTraversalPostProcessEnded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::OnTraversalPostProcessEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnTraversalPostProcessEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UpdateTraversalPostProcess
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Strength                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector2D               FocusPosition                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::UpdateTraversalPostProcess(float Duration, float Strength, const struct FVector2D& FocusPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateTraversalPostProcess"));

	struct
	{
		float                          Duration;
		float                          Strength;
		struct FVector2D               FocusPosition;
	} params = {};

	params.Duration = Duration;
	params.Strength = Strength;
	params.FocusPosition = FocusPosition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.GetDiablerizeEffectStartTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float ATBP_Player_C::GetDiablerizeEffectStartTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.GetDiablerizeEffectStartTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Player.TBP_Player_C.DeactivateHeavyChargeFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::DeactivateHeavyChargeFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.DeactivateHeavyChargeFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UpdateAimGlideCosmetic
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::UpdateAimGlideCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateAimGlideCosmetic"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.DisableSkeletonSmokeEffects
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::DisableSkeletonSmokeEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.DisableSkeletonSmokeEffects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SetupCharacterDuplicates
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshOriginal           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::SetupCharacterDuplicates(class USkeletalMeshComponent* SkeletalMeshOriginal)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SetupCharacterDuplicates"));

	struct
	{
		class USkeletalMeshComponent*  SkeletalMeshOriginal;
	} params = {};

	params.SkeletalMeshOriginal = SkeletalMeshOriginal;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.SwiftStrikeFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::SwiftStrikeFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SwiftStrikeFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnGroupMemberLifeStatusChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         NewLifeStatus                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnGroupMemberLifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnGroupMemberLifeStatusChanged"));

	struct
	{
		ETigerPlayerLifeStatus         NewLifeStatus;
	} params = {};

	params.NewLifeStatus = NewLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UpdateInRedGasEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::UpdateInRedGasEffect(float Delta_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateInRedGasEffect"));

	struct
	{
		float                          Delta_Time;
	} params = {};

	params.Delta_Time = Delta_Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UpdateDownedFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::UpdateDownedFX(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateDownedFX"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.IsLocalClient
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Client                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Player_C::IsLocalClient(bool* Client)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.IsLocalClient"));

	struct
	{
		bool                           Client;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Client != nullptr)
		*Client = params.Client;
}


// Function TBP_Player.TBP_Player_C.UpdateFeedingFX
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::UpdateFeedingFX(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateFeedingFX"));

	struct
	{
		float                          Delta;
	} params = {};

	params.Delta = Delta;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Set Rain Amount
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::Set_Rain_Amount()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Set Rain Amount"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.StunVisualEffect
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  self2                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::StunVisualEffect(class AActor* self2)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.StunVisualEffect"));

	struct
	{
		class AActor*                  self2;
	} params = {};

	params.self2 = self2;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_3__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_3__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_3__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_3__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_3__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_3__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_4__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_4__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_4__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_4__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_4__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_4__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_1__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_1__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_1__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_1__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_2__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_2__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_2__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_2__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_7__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_7__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_7__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_7__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_7__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_7__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_8__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_8__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_8__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_8__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_8__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_8__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ScopeTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::ScopeTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ScopeTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ScopeTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::ScopeTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ScopeTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_13__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_13__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_13__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_13__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_13__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_13__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_13__InvulnerabilityTrigger__EventFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_13__InvulnerabilityTrigger__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_13__InvulnerabilityTrigger__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_13__ToggleCharacterVisibility__EventFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_13__ToggleCharacterVisibility__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_13__ToggleCharacterVisibility__EventFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_Diablerize_Short__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Timeline_Diablerize_Short__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Check Dodge__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Check_Dodge__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Check Dodge__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Check Dodge__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::Check_Dodge__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Check Dodge__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::MuzzleFlashLightTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::MuzzleFlashLightTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::MuzzleFlashLight2Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::MuzzleFlashLight2Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OutlineTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::OutlineTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OutlineTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OutlineTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::OutlineTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OutlineTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.GasDebuffTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::GasDebuffTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.GasDebuffTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.GasDebuffTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::GasDebuffTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.GasDebuffTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::GasDebuffBurnTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Player_C::GasDebuffBurnTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.InpActEvt_Left_K2Node_InputKeyEvent_4
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBP_Player_C::InpActEvt_Left_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.InpActEvt_Left_K2Node_InputKeyEvent_4"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.InpActEvt_Right_K2Node_InputKeyEvent_3
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBP_Player_C::InpActEvt_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.InpActEvt_Right_K2Node_InputKeyEvent_3"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBP_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void ATBP_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnLocalDisciplineUse
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDisciplineUse          DisciplineUse                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ExpectedDuration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnLocalDisciplineUse(const struct FDisciplineUse& DisciplineUse, float ExpectedDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnLocalDisciplineUse"));

	struct
	{
		struct FDisciplineUse          DisciplineUse;
		float                          ExpectedDuration;
	} params = {};

	params.DisciplineUse = DisciplineUse;
	params.ExpectedDuration = ExpectedDuration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.DisciplineJumpFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::DisciplineJumpFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.DisciplineJumpFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnLocalDisciplineUseFailed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDisciplineUse          DisciplineUse                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_Player_C::OnLocalDisciplineUseFailed(const struct FDisciplineUse& DisciplineUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnLocalDisciplineUseFailed"));

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


// Function TBP_Player.TBP_Player_C.LocalPlayer BeginPlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::LocalPlayer_BeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.LocalPlayer BeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnLocalSprintStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::OnLocalSprintStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnLocalSprintStarted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnLocalSprintEnded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::OnLocalSprintEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnLocalSprintEnded"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnLocalEnteredIndoor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::OnLocalEnteredIndoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnLocalEnteredIndoor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnLocalExitedIndoor
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::OnLocalExitedIndoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnLocalExitedIndoor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnStartedFeedingApproach
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TravelTime                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnStartedFeedingApproach(float TravelTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnStartedFeedingApproach"));

	struct
	{
		float                          TravelTime;
	} params = {};

	params.TravelTime = TravelTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnFeedingDoneEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTargetIsDrained               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATigerCharacter*         InTargetFedOn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnFeedingDoneEvent(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnFeedingDoneEvent"));

	struct
	{
		bool                           bTargetIsDrained;
		class ATigerCharacter*         InTargetFedOn;
	} params = {};

	params.bTargetIsDrained = bTargetIsDrained;
	params.InTargetFedOn = InTargetFedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnTigerMovementModeChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     PrevMovementMode               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerMovementMode             PrevCustomMode                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EMovementMode>     NewMovementMode                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerMovementMode             NewCustomMode                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnTigerMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, ETigerMovementMode PrevCustomMode, TEnumAsByte<EMovementMode> NewMovementMode, ETigerMovementMode NewCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnTigerMovementModeChanged"));

	struct
	{
		TEnumAsByte<EMovementMode>     PrevMovementMode;
		ETigerMovementMode             PrevCustomMode;
		TEnumAsByte<EMovementMode>     NewMovementMode;
		ETigerMovementMode             NewCustomMode;
	} params = {};

	params.PrevMovementMode = PrevMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnExtraHealthDepleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnExtraHealthDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnExtraHealthDepleted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnStartedAimingCameraTransition
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnStartedAimingCameraTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnStartedAimingCameraTransition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnStoppedAimingCameraTransition
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnStoppedAimingCameraTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnStoppedAimingCameraTransition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnMasqueradeStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InIsMasqueradeBreached         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// ETigerAIPlayerAction           InPlayerAction                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnMasqueradeStateChanged_Event_1(bool InIsMasqueradeBreached, ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnMasqueradeStateChanged_Event_1"));

	struct
	{
		bool                           InIsMasqueradeBreached;
		ETigerAIPlayerAction           InPlayerAction;
	} params = {};

	params.InIsMasqueradeBreached = InIsMasqueradeBreached;
	params.InPlayerAction = InPlayerAction;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ReceiveActorBeginOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ReceiveActorBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ReceiveActorEndOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ReceiveActorEndOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params = {};

	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnShieldDepleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InInstigator                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnShieldDepleted(class ATigerPlayer* InInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnShieldDepleted"));

	struct
	{
		class ATigerPlayer*            InInstigator;
	} params = {};

	params.InInstigator = InInstigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnModEquipped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnModEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnModEquipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.Client On Mod Equipped
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::Client_On_Mod_Equipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.Client On Mod Equipped"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.K2_OnEndViewTarget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APlayerController*       PC                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.K2_OnEndViewTarget"));

	struct
	{
		class APlayerController*       PC;
	} params = {};

	params.PC = PC;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.LocalPlayerTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaSeconds                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::LocalPlayerTick(float InDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.LocalPlayerTick"));

	struct
	{
		float                          InDeltaSeconds;
	} params = {};

	params.InDeltaSeconds = InDeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.BndEvt__TBP_Player_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_Player_C::BndEvt__TBP_Player_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.BndEvt__TBP_Player_AudioTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnBuffAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerBuff*              Buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ID                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnBuffAdded"));

	struct
	{
		class UTigerBuff*              Buff;
		int                            ID;
		float                          Duration;
	} params = {};

	params.Buff = Buff;
	params.ID = ID;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnDisciplineUseSucceeded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDisciplineUse          DisciplineUse                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_Player_C::OnDisciplineUseSucceeded(const struct FDisciplineUse& DisciplineUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnDisciplineUseSucceeded"));

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


// Function TBP_Player.TBP_Player_C.OnLanded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_Player_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnLanded"));

	struct
	{
		struct FHitResult              Hit;
	} params = {};

	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ReceivePossessed"));

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


// Function TBP_Player.TBP_Player_C.OnShowDamageAmount
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InHitLocation                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            InDamageColor                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InTotalDamageAmount            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InHealthDamageAmount           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInHasExtraHealth              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bInHasShield                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InRangedDamageFalloffPercent   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnShowDamageAmount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnShowDamageAmount"));

	struct
	{
		struct FVector                 InHitLocation;
		struct FLinearColor            InDamageColor;
		int                            InTotalDamageAmount;
		int                            InHealthDamageAmount;
		bool                           bInHasExtraHealth;
		bool                           bInHasShield;
		float                          InRangedDamageFalloffPercent;
	} params = {};

	params.InHitLocation = InHitLocation;
	params.InDamageColor = InDamageColor;
	params.InTotalDamageAmount = InTotalDamageAmount;
	params.InHealthDamageAmount = InHealthDamageAmount;
	params.bInHasExtraHealth = bInHasExtraHealth;
	params.bInHasShield = bInHasShield;
	params.InRangedDamageFalloffPercent = InRangedDamageFalloffPercent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnWeaponFired
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSecondaryWeaponFired          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Player_C::OnWeaponFired(bool bSecondaryWeaponFired)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnWeaponFired"));

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


// Function TBP_Player.TBP_Player_C.OnRep_PlayerClan
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnRep_PlayerClan()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnRep_PlayerClan"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.LifeStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         NewLifeStatus                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::LifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.LifeStatusChanged"));

	struct
	{
		ETigerPlayerLifeStatus         NewLifeStatus;
	} params = {};

	params.NewLifeStatus = NewLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnGotPlayerState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnGotPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnGotPlayerState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnRep_PowerKit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnRep_PowerKit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnRep_PowerKit"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnDodged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsControllingPlayer            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bLaunchedInAir                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 LaunchDirection                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  DodgeStage                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnDodged(bool IsControllingPlayer, bool bLaunchedInAir, const struct FVector& LaunchDirection, unsigned char DodgeStage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnDodged"));

	struct
	{
		bool                           IsControllingPlayer;
		bool                           bLaunchedInAir;
		struct FVector                 LaunchDirection;
		unsigned char                  DodgeStage;
	} params = {};

	params.IsControllingPlayer = IsControllingPlayer;
	params.bLaunchedInAir = bLaunchedInAir;
	params.LaunchDirection = LaunchDirection;
	params.DodgeStage = DodgeStage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnGotScouted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::OnGotScouted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnGotScouted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnNoLongerScouted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::OnNoLongerScouted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnNoLongerScouted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnAboutToBeHitByDisplacement
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnAboutToBeHitByDisplacement()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnAboutToBeHitByDisplacement"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnDamageTaken
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DamageTaken                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnDamageTaken(float DamageTaken, class AActor* DamageInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnDamageTaken"));

	struct
	{
		float                          DamageTaken;
		class AActor*                  DamageInstigator;
	} params = {};

	params.DamageTaken = DamageTaken;
	params.DamageInstigator = DamageInstigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnDoubleJump
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnDoubleJump(const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnDoubleJump"));

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


// Function TBP_Player.TBP_Player_C.OnPlayMeleeHitEffects
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMeleeWeapon*       WeaponHitBy                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 ImpactLocation                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 HitDirection                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnPlayMeleeHitEffects(class UTigerMeleeWeapon* WeaponHitBy, const struct FVector& ImpactLocation, const struct FVector& HitDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnPlayMeleeHitEffects"));

	struct
	{
		class UTigerMeleeWeapon*       WeaponHitBy;
		struct FVector                 ImpactLocation;
		struct FVector                 HitDirection;
	} params = {};

	params.WeaponHitBy = WeaponHitBy;
	params.ImpactLocation = ImpactLocation;
	params.HitDirection = HitDirection;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnStartedPhysicalInteraction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bIsTargetPlayer                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Player_C::OnStartedPhysicalInteraction(class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass, bool bIsTargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnStartedPhysicalInteraction"));

	struct
	{
		class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass;
		bool                           bIsTargetPlayer;
	} params = {};

	params.PhysInteractionClass = PhysInteractionClass;
	params.bIsTargetPlayer = bIsTargetPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnInterruptedPhysicalInteraction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bIsTargetPlayer                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Player_C::OnInterruptedPhysicalInteraction(class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass, bool bIsTargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnInterruptedPhysicalInteraction"));

	struct
	{
		class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass;
		bool                           bIsTargetPlayer;
	} params = {};

	params.PhysInteractionClass = PhysInteractionClass;
	params.bIsTargetPlayer = bIsTargetPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnFinishedPhysicalInteraction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
// bool                           bIsTargetPlayer                (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Player_C::OnFinishedPhysicalInteraction(class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass, bool bIsTargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnFinishedPhysicalInteraction"));

	struct
	{
		class UClass* /*UTigerPhysicalInteraction*/ PhysInteractionClass;
		bool                           bIsTargetPlayer;
	} params = {};

	params.PhysInteractionClass = PhysInteractionClass;
	params.bIsTargetPlayer = bIsTargetPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnWeaponVisualChangedEvent
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Player_C::OnWeaponVisualChangedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnWeaponVisualChangedEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnWallJump
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnWallJump(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnWallJump"));

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


// Function TBP_Player.TBP_Player_C.OnClimbStarted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnClimbStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnClimbStarted"));

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


// Function TBP_Player.TBP_Player_C.OnClimbEnded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnClimbEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnClimbEnded"));

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


// Function TBP_Player.TBP_Player_C.OnWallGrindStarted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnWallGrindStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnWallGrindStarted"));

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


// Function TBP_Player.TBP_Player_C.OnWallGrindEnded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnWallGrindEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnWallGrindEnded"));

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


// Function TBP_Player.TBP_Player_C.OnHardLanding
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnHardLanding(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnHardLanding"));

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


// Function TBP_Player.TBP_Player_C.OnSlideJump
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnSlideJump(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnSlideJump"));

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


// Function TBP_Player.TBP_Player_C.OnSlidingStarted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnSlidingStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnSlidingStarted"));

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


// Function TBP_Player.TBP_Player_C.OnSlidingEnded
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnSlidingEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnSlidingEnded"));

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


// Function TBP_Player.TBP_Player_C.OnBecameSpectator
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnBecameSpectator()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnBecameSpectator"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnBecameGroupMember
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnBecameGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnBecameGroupMember"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnStoppedBeingGroupMember
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnStoppedBeingGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnStoppedBeingGroupMember"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// ETigerOutlineMode              HighestPrioOutline             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature(ETigerOutlineMode HighestPrioOutline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature"));

	struct
	{
		ETigerOutlineMode              HighestPrioOutline;
	} params = {};

	params.HighestPrioOutline = HighestPrioOutline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UpdateHolyIncenseEffect
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::UpdateHolyIncenseEffect(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateHolyIncenseEffect"));

	struct
	{
		float                          InDeltaTime;
	} params = {};

	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.IncrementShieldShaderCounter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::IncrementShieldShaderCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.IncrementShieldShaderCounter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.DecrementShieldShaderCounter
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::DecrementShieldShaderCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.DecrementShieldShaderCounter"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.IncrementFeedingBloodIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::IncrementFeedingBloodIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.IncrementFeedingBloodIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnGoneBelowHalfHealth
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnGoneBelowHalfHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnGoneBelowHalfHealth"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.StopDeathTransition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Player_C::StopDeathTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.StopDeathTransition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnGotHitForAudio
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InSurfaceForAudio              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnGotHitForAudio(const struct FName& InSurfaceForAudio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnGotHitForAudio"));

	struct
	{
		struct FName                   InSurfaceForAudio;
	} params = {};

	params.InSurfaceForAudio = InSurfaceForAudio;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnStartedFeedingForAudio
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TravelTime                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnStartedFeedingForAudio(float TravelTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnStartedFeedingForAudio"));

	struct
	{
		float                          TravelTime;
	} params = {};

	params.TravelTime = TravelTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnFeedingDoneForAudio
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTargetIsDrained               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATigerCharacter*         InTargetFedOn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::OnFeedingDoneForAudio(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnFeedingDoneForAudio"));

	struct
	{
		bool                           bTargetIsDrained;
		class ATigerCharacter*         InTargetFedOn;
	} params = {};

	params.bTargetIsDrained = bTargetIsDrained;
	params.InTargetFedOn = InTargetFedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.UpdateHolyIncenseAudio
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::UpdateHolyIncenseAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.UpdateHolyIncenseAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.OnRestart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Player_C::OnRestart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.OnRestart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Player.TBP_Player_C.ExecuteUbergraph_TBP_Player
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Player_C::ExecuteUbergraph_TBP_Player(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.ExecuteUbergraph_TBP_Player"));

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


// Function TBP_Player.TBP_Player_C.SpeedFullscreenEffectEventDispatch__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          TravelTime                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsFeedingApproach             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Player_C::SpeedFullscreenEffectEventDispatch__DelegateSignature(float TravelTime, bool bIsFeedingApproach)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Player.TBP_Player_C.SpeedFullscreenEffectEventDispatch__DelegateSignature"));

	struct
	{
		float                          TravelTime;
		bool                           bIsFeedingApproach;
	} params = {};

	params.TravelTime = TravelTime;
	params.bIsFeedingApproach = bIsFeedingApproach;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
