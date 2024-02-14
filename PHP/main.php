<?php
    require ('DPR.php'); // memanggil file class
    // input data secara statis
    $member1 = new DPR('123', 'Tattha', 'Ketum', 'PSI', 'megachan.png');
    $member2 = new DPR('342', 'Arya', 'Ketum', 'Gerindra', 'megachan.png');
    $member3 = new DPR('890', 'Unyung', 'Anggota', 'PDI', 'megachan.png');
    // masukan data ke array, karena dimasukkan langsung (hanya sebaris, bukan per kata) maka harus dipisah terlebih dahulu
    $listDPR = array(
        $member1->getId() . ' ' . $member1->getName() . ' ' . $member1->getBidang() . ' ' . $member1->getPartai() . ' ' . $member1->getFoto(),
        $member2->getId() . ' ' . $member2->getName() . ' ' . $member2->getBidang() . ' ' . $member2->getPartai() . ' ' . $member2->getFoto(),
        $member3->getId() . ' ' . $member3->getName() . ' ' . $member3->getBidang() . ' ' . $member3->getPartai() . ' ' . $member3->getFoto()
    );
    
    // update
    $target = array_search('890 Unyung Anggota PDI megachan.png', $listDPR);
    if($target !== false)
    {
        $listDPR[$target] = '890 Unyung Ketum PDI megachan.png';
    }
    // delete
    $target = array_search('890 Unyung Ketum PDI megachan.png', $listDPR);
    if($target !== false)
    {
        unset($listDPR[$target]);
    }
?>  
<!-- menampilkan pada page localhost -->
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data DPR</title>
    <style>
        table {
            border-collapse: collapse;
            width: 80%;
        }
        th, td {
            border: 1px solid #dddddd;
            text-align: center;
            padding: 8px;
        }
        th {
            background-color: #f2f2f2;
        }
        img {
            width: 95px; /* Ubah ukuran sesuai kebutuhan */
            height: auto; /* Biarkan tinggi otomatis agar proporsi gambar tetap terjaga */
        }
    </style>
</head>
<body>
    <h2>Data DPR</h2>
    <table>
        <tr>
            <th>ID</th>
            <th>Nama</th>
            <th>Bidang</th>
            <th>Partai</th>
            <th>Foto</th>
        </tr>
        <?php foreach ($listDPR as $string) {
            $data = explode(' ', $string);
            ?>
            <tr>
                <!-- menampilkan data -->
                <?php foreach ($data as $key => $value) {
                    if ($key == 4) { ?>
                        <td><img src="<?php echo $value; ?>"></td>
                    <?php } else { ?>
                        <td><?php echo $value; ?></td>
                    <?php } ?>
                <?php } ?>
            </tr>
        <?php } ?>
    </table>
</body>
</html>
