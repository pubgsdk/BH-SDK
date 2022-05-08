// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ScoutingFamiliar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.CreateInWorldWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   OwningPawn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::CreateInWorldWidget(class APawn* OwningPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.CreateInWorldWidget"));

	struct
	{
		class APawn*                   OwningPawn;
	} params = {};

	params.OwningPawn = OwningPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Ravaging Bats Trait
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::Ravaging_Bats_Trait(class AActor* DamagedActor, class AActor* DamageCauser, class ATigerPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Ravaging Bats Trait"));

	struct
	{
		class AActor*                  DamagedActor;
		class AActor*                  DamageCauser;
		class ATigerPlayer*            Player;
	} params = {};

	params.DamagedActor = DamagedActor;
	params.DamageCauser = DamageCauser;
	params.Player = Player;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.StartScanAudio
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::StartScanAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.StartScanAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ColorCodeEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* ParticleComponentToColor       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShouldOverrideDefaultColor    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FLinearColor            StandardColorOverride          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            EnemyColorOverride             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bShouldOverrideEnemyCoor       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_ScoutingFamiliar_C::ColorCodeEffect(class UParticleSystemComponent* ParticleComponentToColor, bool bShouldOverrideDefaultColor, const struct FLinearColor& StandardColorOverride, const struct FLinearColor& EnemyColorOverride, bool bShouldOverrideEnemyCoor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ColorCodeEffect"));

	struct
	{
		class UParticleSystemComponent* ParticleComponentToColor;
		bool                           bShouldOverrideDefaultColor;
		struct FLinearColor            StandardColorOverride;
		struct FLinearColor            EnemyColorOverride;
		bool                           bShouldOverrideEnemyCoor;
	} params = {};

	params.ParticleComponentToColor = ParticleComponentToColor;
	params.bShouldOverrideDefaultColor = bShouldOverrideDefaultColor;
	params.StandardColorOverride = StandardColorOverride;
	params.EnemyColorOverride = EnemyColorOverride;
	params.bShouldOverrideEnemyCoor = bShouldOverrideEnemyCoor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.SpawnEmitterColorCoded
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UParticleSystem*         InParticleAssetToSpawn         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTransform              InRelativeTransform            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FName                   InAttachPointName              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class USceneComponent*         InComponentAttachedTo          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInShouldSpawnForEnemy         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bInShouldSpawnForAlly          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UParticleSystemComponent* SpawnedParticle                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::SpawnEmitterColorCoded(class UParticleSystem* InParticleAssetToSpawn, const struct FTransform& InRelativeTransform, const struct FName& InAttachPointName, class USceneComponent* InComponentAttachedTo, bool bInShouldSpawnForEnemy, bool bInShouldSpawnForAlly, class UParticleSystemComponent** SpawnedParticle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.SpawnEmitterColorCoded"));

	struct
	{
		class UParticleSystem*         InParticleAssetToSpawn;
		struct FTransform              InRelativeTransform;
		struct FName                   InAttachPointName;
		class USceneComponent*         InComponentAttachedTo;
		bool                           bInShouldSpawnForEnemy;
		bool                           bInShouldSpawnForAlly;
		class UParticleSystemComponent* SpawnedParticle;
	} params = {};

	params.InParticleAssetToSpawn = InParticleAssetToSpawn;
	params.InRelativeTransform = InRelativeTransform;
	params.InAttachPointName = InAttachPointName;
	params.InComponentAttachedTo = InComponentAttachedTo;
	params.bInShouldSpawnForEnemy = bInShouldSpawnForEnemy;
	params.bInShouldSpawnForAlly = bInShouldSpawnForAlly;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedParticle != nullptr)
		*SpawnedParticle = params.SpawnedParticle;
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Deactivate Projectile Effects
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::Deactivate_Projectile_Effects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Deactivate Projectile Effects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Activate Projectile Effects
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::Activate_Projectile_Effects()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Activate Projectile Effects"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Spawn Projectile Trail
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::Spawn_Projectile_Trail()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Spawn Projectile Trail"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Despawn Projectile Trail
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::Despawn_Projectile_Trail()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Despawn Projectile Trail"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Hide World Marker Detection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::Try_Hide_World_Marker_Detection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Hide World Marker Detection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Show World Marker Detection
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::Try_Show_World_Marker_Detection()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Show World Marker Detection"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetWorldMarkerWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsWorldMarkerClass            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UTBP_UI_Discipline_Scout_WorldMarker_C* WorldMarker                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::GetWorldMarkerWidget(bool* bIsWorldMarkerClass, class UTBP_UI_Discipline_Scout_WorldMarker_C** WorldMarker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetWorldMarkerWidget"));

	struct
	{
		bool                           bIsWorldMarkerClass;
		class UTBP_UI_Discipline_Scout_WorldMarker_C* WorldMarker;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bIsWorldMarkerClass != nullptr)
		*bIsWorldMarkerClass = params.bIsWorldMarkerClass;
	if (WorldMarker != nullptr)
		*WorldMarker = params.WorldMarker;
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Toggle WorldMarker Detection State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::Toggle_WorldMarker_Detection_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Toggle WorldMarker Detection State"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsCharacterFriendlyWithDisciplineCaster
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ATigerCharacter*         Potentially_Friendly_Character (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Is_Friendly                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_ScoutingFamiliar_C::IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* Potentially_Friendly_Character, bool* Is_Friendly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsCharacterFriendlyWithDisciplineCaster"));

	struct
	{
		class ATigerCharacter*         Potentially_Friendly_Character;
		bool                           Is_Friendly;
	} params = {};

	params.Potentially_Friendly_Character = Potentially_Friendly_Character;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Is_Friendly != nullptr)
		*Is_Friendly = params.Is_Friendly;
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsLocallyControlled
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Is_Locally_Controlled          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_ScoutingFamiliar_C::IsLocallyControlled(bool* Is_Locally_Controlled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsLocallyControlled"));

	struct
	{
		bool                           Is_Locally_Controlled;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Is_Locally_Controlled != nullptr)
		*Is_Locally_Controlled = params.Is_Locally_Controlled;
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetScoutingDistanceToOwnerLimit
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          MaxScoutingDistance            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::GetScoutingDistanceToOwnerLimit(float* MaxScoutingDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetScoutingDistanceToOwnerLimit"));

	struct
	{
		float                          MaxScoutingDistance;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (MaxScoutingDistance != nullptr)
		*MaxScoutingDistance = params.MaxScoutingDistance;
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.AddRevealedChar
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Time                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::AddRevealedChar(class ATigerCharacter* Character, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.AddRevealedChar"));

	struct
	{
		class ATigerCharacter*         Character;
		float                          Time;
	} params = {};

	params.Character = Character;
	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.PlaySound
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAkAudioEvent*           Audio                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::PlaySound(class UAkAudioEvent* Audio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.PlaySound"));

	struct
	{
		class UAkAudioEvent*           Audio;
	} params = {};

	params.Audio = Audio;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsServerOrOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Is_Owner_Or_Server             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_ScoutingFamiliar_C::IsServerOrOwner(bool* Is_Owner_Or_Server)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsServerOrOwner"));

	struct
	{
		bool                           Is_Owner_Or_Server;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Is_Owner_Or_Server != nullptr)
		*Is_Owner_Or_Server = params.Is_Owner_Or_Server;
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateScouting
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::ActivateScouting()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateScouting"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateFeedback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::ActivateFeedback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateFeedback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.TickRevealedCharacters
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::TickRevealedCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.TickRevealedCharacters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnTargetLocationChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::OnTargetLocationChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnTargetLocationChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnScoutStartedReturnToOwner
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::OnScoutStartedReturnToOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnScoutStartedReturnToOwner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnArrivedAtOwner
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::OnArrivedAtOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnArrivedAtOwner"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BatDestroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_ScoutingFamiliar_C::BatDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BatDestroy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_ScoutingFamiliar_C::BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));

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


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__TBP_ScoutingFamiliar_ScanSphereComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Progress Scouting Achievement
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InScoutedTigerPlayer           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::Progress_Scouting_Achievement(class ATigerPlayer* InScoutedTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Progress Scouting Achievement"));

	struct
	{
		class ATigerPlayer*            InScoutedTigerPlayer;
	} params = {};

	params.InScoutedTigerPlayer = InScoutedTigerPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ExecuteUbergraph_TBP_ScoutingFamiliar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_ScoutingFamiliar_C::ExecuteUbergraph_TBP_ScoutingFamiliar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ExecuteUbergraph_TBP_ScoutingFamiliar"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
