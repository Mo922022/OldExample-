#ifndef RunAction_h
#define RunAction_h 1

#include "G4UserRunAction.hh"
#include "globals.hh"

class G4Run;
class HistoManager;
class DetectorConstruction;

class RunAction : public G4UserRunAction
{
	public:
		RunAction(HistoManager*, unsigned long);
		RunAction(HistoManager*);
		~RunAction();

	public:
		void BeginOfRunAction(const G4Run*);
		void EndOfRunAction(const G4Run*);

	private:
		HistoManager* histoManager;

};

#endif
