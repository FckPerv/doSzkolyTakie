$User = Read-Host 'podaj slowo'
function znajdzUsluge{
    Param(
        [string]$slowo
    )
    Process{
        $result = Get-Service -Name *"$slowo"*
        Write-output $result.name
    }
}

function wymagane{
    Param (
        [parameter(Mandatory=$true)]  [string]$szukane,
        [parameter(Mandatory=$false)]  [switch]$przelacznik 
    )
    Process{

        if($przelacznik -eq $false)
        {
            write-host $szukane
            $foo=Get-Service -RequiredServices $szukane;
            foreach($itemek in $foo){
                write-host "   " $itemek.name  " : " $itemek.status 
                    if($itemek.status -eq "stopped")
                    {
                        wymagane -szukane $itemek.name -przelacznik
                    }
                }
                
        }
        if( $przelacznik -eq $true)
        {
            $foo=Get-Service -RequiredServices $szukane;
            foreach($itemek in $foo){
                write-host "         " $itemek.name  " : " $itemek.status 
                
                }
        }
    }
}
        
    
    
    
$pomoc = znajdzUsluge -slowo $User
foreach($slowo in $pomoc)
{
    wymagane -szukane $slowo
}

write-host $nwm
