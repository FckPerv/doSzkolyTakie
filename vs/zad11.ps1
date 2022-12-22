$User = Read-Host 'podaj slowo'
$result = Get-Service -Name *"$User"*
foreach ($item in $result){ Write-Host $item.name;
$foo=Get-Service -RequiredServices $item.name;
foreach($itemek in $foo){
    Write-Host "   " $itemek.name  " : "$itemek.status
    }
    Write-Host  "`n"
}
Write-Host $LASTEXITCODE