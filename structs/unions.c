//
// unions.c
// A program to demonstrate the use of union
// in C
//
#include <stdio.h>
#include <string.h>

typedef unsigned char byte;

#define LOCATION_MAX 100

typedef union locality {
  char village[LOCATION_MAX];
  char street[LOCATION_MAX];
} Locality;

typedef union identifier {
  int house_no;
  char house_reference[LOCATION_MAX];
} Identifier;

typedef struct location {
  Identifier identifier;
  Locality locality;
  byte is_village:1;
  char city[LOCATION_MAX];
  char state[LOCATION_MAX];
} Location;

void copy_location_str(char* dst, const char* src){
  strncpy(dst, src, LOCATION_MAX);
  dst[LOCATION_MAX] = '\0';
}

Locality create_village_locality(char *village){
  Locality locality;
  copy_location_str(locality.village, village);
  return locality;
}

Locality create_street_locality(char *street){
  Locality locality;
  copy_location_str(locality.street, street);
  return locality;
}

Location create_location(Identifier identifier,
			 Locality locality,
			 int is_village,
			 char *city,
			 char *state){
  Location location;
  location.locality = locality;
  location.identifier = identifier;
  location.is_village = is_village;
  copy_location_str(location.city, city);
  copy_location_str(location.state, state);
  return location;
}

Location create_village(char* identifier_str,
			char* village,
			char* city,
			char* state){
  Identifier i;
  copy_location_str(i.house_reference, identifier_str);
  return create_location(i, create_village_locality(village), 1, city, state);
}


Location create_street(int house_no,
		       char* village,
		       char* city,
		       char* state){
  Identifier i;
  i.house_no = house_no;
  return create_location(i, create_village_locality(village), 0, city, state);
}

void print_description(const Location *l){
  char identifier_desc[LOCATION_MAX];
  if(l->is_village){
    copy_location_str(identifier_desc, l->identifier.house_reference);
  }else {
    sprintf(identifier_desc, "House NO: %d", l->identifier.house_no);
  }
  
  printf("%s, %s \"%s\", %s. It is located in the state of %s\n",
	 identifier_desc,
	 (l->is_village ? "village": "street"),
	 (l->is_village ? l->locality.village: l->locality.street),
	 l->city, l->state);
}
	 
int main(void){
  Location kulgam = create_village("First House Near Masjid", "Chelan", "Kulgam", "J&K");
  Location srinagar = create_street(101, "Habib Colony", "Srinagar", "J&K");

  print_description(&kulgam);
  print_description(&srinagar);
  
  return 0;
}
  
  
  
