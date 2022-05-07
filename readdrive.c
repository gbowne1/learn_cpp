//
// Reading/writing raw sectors.
//
 
//pBuffer has to be at least 512 bytes wide.
BOOL ReadSector(char chDriveName,char *pBuffer,DWORD nSector)
{
 
    char Buffer[256];
    HANDLE hDevice;
    DWORD dwBytesReaden;

    //Init the drive name (as a Driver name). 
    sprintf(Buffer,"\\\\.\\%c:",chDriveName);

    hDevice = 
      CreateFile(Buffer,                  // drive to open.
                GENERIC_READ,
                FILE_SHARE_READ | // share mode.
                FILE_SHARE_WRITE, 
                NULL,             // default security attributes.
                OPEN_EXISTING,    // disposition.
                0,                // file attributes.
                NULL);            // 

    if(hDrive==INVALID_HANDLE_VALUE)//if Error Openning a drive.
    {
           return FALSE;
    }
 
    //Move the read pointer to the right sector.
    if(SetFilePointer(hDevice,
           nSector*512,
           NULL,
           FILE_BEGIN)==0xFFFFFFFF)
           return FALSE;

    //Read the Sector.
    ReadFile(hDevice,
           pBuffer,
           512,
           &dwBytesReaden,
           0);

    //if Error reading the sector.
    if(dwBytesReaden!=512)
           return FALSE;

    return TRUE;
}