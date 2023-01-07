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
    param (
        [object[]]
        $szukane
    )
    Process{
        $odp =""
        foreach($item in $szukane){
            $odp += write-host $item
            $foo=Get-Service -RequiredServices $item;
            foreach($itemek in $foo){
                $odp+=write-host "   " $itemek.name  " : " $itemek.status 
                }
                $odp+= write-host
        }
        $odp+=  "`n"
        Write-Output $odp
        }
    
}

$pomoc = znajdzUsluge -slowo $User
$nwm =wymagane -szukane $pomoc
write-host $nwm
Write-Host $LASTEXITCODE