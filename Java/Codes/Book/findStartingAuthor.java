public boolean findStartingAuthor(String author){
		for (int i = 0; i < library.lenght ; i++){
			if (library[i].getAuthor().startsWith(author){
				return true;
			}
		}
		return false;
	}
