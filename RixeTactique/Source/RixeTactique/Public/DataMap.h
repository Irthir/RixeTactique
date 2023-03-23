// Copyright Romain Schlotter. All Rights Reserved.

/****************************************************************************************************\
* Fichier       : DataMap.h
*
* Description   : Fichier représentant ce que peut stocker une salle.
*
* Créateur      : Romain Schlotter
*
* Changelog     : 
*   13-01-2023  : Création du fichier.
\****************************************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DataMap.generated.h"

//Énumérateur d'origine d'une carte.
UENUM(BlueprintType)
enum class EElementSalle : uint8
{
	Nord UMETA(DisplayName = "Nord"),
	Est UMETA(DisplayName = "Est"),
	Sud UMETA(DisplayName = "Sud"),
	Ouest UMETA(DisplayName = "Ouest"),
	J1 UMETA(DisplayName = "Joueur1"),
	J2 UMETA(DisplayName = "Joueur2"),
	Tresor UMETA(DisplayName = "Tresor"),
	Vision UMETA(DisplayName = "Vision"),
	Boss UMETA(DisplayName = "Boss"),
	Soin UMETA(DisplayName = "Soin"),
};
inline TMap<EElementSalle,FString> EElementSalleMap = {
	{EElementSalle::Nord, "Nord"},
	{EElementSalle::Est, "Est"},
	{EElementSalle::Sud, "Sud"},
	{EElementSalle::Ouest, "Ouest"},
	{EElementSalle::J1, "Joueur1"},
	{EElementSalle::J2, "Joueur2"},
	{EElementSalle::Tresor, "Tresor"},
	{EElementSalle::Vision, "Vision"},
	{EElementSalle::Boss, "Boss"},
	{EElementSalle::Soin, "Soin"},
};

/** Please add a struct description */
USTRUCT(BlueprintType)
struct FDataMap : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	/* Contenu d'une salle */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="ElementSalle"))
	TArray<EElementSalle> tElementSalle;
};
