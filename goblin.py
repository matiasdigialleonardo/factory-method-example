class Goblin:
    def greet(self):
        pass
    
class WarriorGoblin(Goblin):
    def greet(self):
        print("I`m a warrior goblin.")
        
class ArcherGoblin(Goblin):
    def greet(self):
        print("I`m an archer goblin.")
        
class GoblinCreator():
    def create_goblin(self):
        pass

    def perform_greet(self):
        goblin = self.create_goblin()
        goblin.greet()
    
class WarriorGoblinCreator(GoblinCreator):
    def create_goblin(self):
        return WarriorGoblin()
    
class ArcherGoblinCreator(GoblinCreator):
    def create_goblin(self):
        return ArcherGoblin()
    
if __name__ == "__main__":
    goblinCreator = ArcherGoblinCreator()
    goblinCreator.perform_greet()