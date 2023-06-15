package com.example.pei2022;

import android.content.Intent;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.preference.PreferenceManager;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.SwitchCompat;

import com.bumptech.glide.Glide;
import com.bumptech.glide.load.engine.DiskCacheStrategy;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MarkerOptions;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;

import org.osmdroid.api.IMapController;
import org.osmdroid.config.Configuration;
import org.osmdroid.tileprovider.tilesource.TileSourceFactory;
import org.osmdroid.util.GeoPoint;
import org.osmdroid.views.MapView;
import org.osmdroid.views.overlay.ItemizedIconOverlay;
import org.osmdroid.views.overlay.ItemizedOverlayWithFocus;
import org.osmdroid.views.overlay.Overlay;
import org.osmdroid.views.overlay.OverlayItem;

import java.util.ArrayList;
import java.util.Map;
import java.util.Objects;

public class Cartoes_postais extends AppCompatActivity {

    private void Activity_praias(){
        Intent intent = new Intent(Cartoes_postais.this, Praias.class);
        startActivity(intent);
    }
    private void Activity_parques(){
        Intent intent = new Intent(Cartoes_postais.this, Parques.class);
        startActivity(intent);
    }
    private void Activity_belezas_naturais(){
        Intent intent = new Intent(Cartoes_postais.this, Belezas_Naturais.class);
        startActivity(intent);
    }
    private void Activity_igrejas_e_conventos(){
        Intent intent = new Intent(Cartoes_postais.this, IC.class);
        startActivity(intent);
    }
    private void Activity_museu(){
        Intent intent = new Intent(Cartoes_postais.this, museu.class);
        startActivity(intent);
    }

    String URLcp = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/penhaofconvent.jpg?alt=media&token=b404e942-cd37-4e16-a620-7ab34cf4b044";
    String URLcj = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/curva%20da%20juremagiga.jpg?alt=media&token=b04497db-dadb-4a20-9d3b-476573d28abf";
    String URLmm = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/morro%20do%20moreno.jpg?alt=media&token=5b5bb263-7c28-4a74-bdf2-e1ed8d6dd4cb";
    String URLpa = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/anchieta-e1501073778433-1068x641.jpg?alt=media&token=64b88618-e7d1-4e92-9b8f-71fac8d62051&_gl=1*xjsxue*_ga*MTg0NDYyODM4Ni4xNjg1NTM5Nzc5*_ga_CW55HF8NVT*MTY4NTUzOTc3OS4xLjEuMTY4NTU0MDE4Ni4wLjAuMA..";
    String URLpc = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/stoneofonion.jpg?alt=media&token=c0b61f30-f1c0-49e3-b80d-f59cfb6155ce";
    String URLpb = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/parque-botanico-vale.jpg?alt=media&token=847f57d4-c57f-417c-8067-14c9e6baf0da";
    String URLps = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/praiasecretgiga.png?alt=media&token=830b520f-8a9a-4453-a89b-f29a59a41783";
    String URLpf = "https://firebasestorage.googleapis.com/v0/b/pei2022.appspot.com/o/foto%2002.JPG?alt=media&token=94371782-40ca-476e-bad5-393ef2942c55";

    MapView mapViewCP, mapViewCJ, mapViewMM, mapViewPA, mapViewPC, mapViewPB, mapViewPS, mapViewPF;

    GeoPoint ConventoPenha = new GeoPoint( -20.32935747422874, -40.28706905731488);
    GeoPoint CurvaJurema = new GeoPoint( -20.309074613578854, -40.2882398440651);
    GeoPoint MorroMoreno = new GeoPoint( -20.326306781027686, -40.27746350340441);
    GeoPoint PalacioAnchieta = new GeoPoint( -20.32119605053253, -40.33970503906105);
    GeoPoint PedraCebola = new GeoPoint( -20.276551785138537, -40.29771314580953);
    GeoPoint BotanicoVale = new GeoPoint( -20.25819958112037, -40.26018290348023);
    GeoPoint PraiaSecreta = new GeoPoint( -20.65397702008593, -40.46622457463485);
    GeoPoint PraiaFrade = new GeoPoint( -20.303328905567227, -40.28550940347909);

    @Override
    protected void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);
        Objects.requireNonNull(getSupportActionBar()).setTitle(this.getResources().getString(R.string.categorias));
        setContentView(R.layout.activity_cartoes_postais);

        Configuration.getInstance().load(getApplicationContext(),
                PreferenceManager.getDefaultSharedPreferences( getApplicationContext()));

        mapViewCP = findViewById(R.id.mapViewCP);
        mapViewCJ = findViewById(R.id.mapViewCJ);
        mapViewMM = findViewById(R.id.mapViewMM);
        mapViewPA = findViewById(R.id.mapViewPA);
        mapViewPC = findViewById(R.id.mapViewPC);
        mapViewPB = findViewById(R.id.mapViewPB);
        mapViewPS = findViewById(R.id.mapViewPS);
        mapViewPF = findViewById(R.id.mapViewPF);

        generateMap(mapViewCP, ConventoPenha, "Convento da Penha");
        generateMap(mapViewCJ, CurvaJurema, "Curva da Jurema");
        generateMap(mapViewMM, MorroMoreno, "Morro do Moreno");
        generateMap(mapViewPA, PalacioAnchieta, "Palácio do Anchieta");
        generateMap(mapViewPC, PedraCebola, "Parque Pedra da Cebola");
        generateMap(mapViewPB, BotanicoVale, "Parque Botânico Vale");
        generateMap(mapViewPS, PraiaSecreta, "Praia Secreta");
        generateMap(mapViewPF, PraiaFrade, "Praia do Frade");


        SwitchCompat VejaMaisCP = findViewById(R.id.VejaMaisCP);
        LinearLayout layoutCP = findViewById(R.id.layoutCP);
        layoutCP.setVisibility((View.GONE));

        SwitchCompat VejaMaisCJ = findViewById(R.id.VejaMaisCJ);
        LinearLayout layoutcj = findViewById(R.id.layoutcj);
        layoutcj.setVisibility((View.GONE));

        SwitchCompat VejaMaisMM = findViewById(R.id.VejaMaisMM);
        LinearLayout layoutmm = findViewById(R.id.layoutmm);
        layoutmm.setVisibility((View.GONE));

        SwitchCompat VejaMaisPA = findViewById(R.id.VejaMaisPA);
        LinearLayout layoutpa = findViewById(R.id.layoutPA);
        layoutpa.setVisibility((View.GONE));

        SwitchCompat VejaMaisPC = findViewById(R.id.VejaMaisPC);
        LinearLayout layoutpc = findViewById(R.id.layoutpc);
        layoutpc.setVisibility((View.GONE));

        SwitchCompat VejaMaisPB = findViewById(R.id.VejaMaisPB);
        LinearLayout layoutpb = findViewById(R.id.layoutpb);
        layoutpb.setVisibility((View.GONE));

        SwitchCompat VejaMaisPS = findViewById(R.id.VejaMaisPS);
        LinearLayout layoutps = findViewById(R.id.layoutps);
        layoutps.setVisibility((View.GONE));

        SwitchCompat VejaMaisPF = findViewById(R.id.VejaMaisPF);
        LinearLayout layoutpf = findViewById(R.id.layoutpf);
        layoutpf.setVisibility((View.GONE));


        ImageView imageViewCP = findViewById(R.id.imageViewCP);
        ImageView imageViewCJ = findViewById(R.id.imageViewCJ);
        ImageView imageViewMM = findViewById(R.id.imageViewMM);
        ImageView imageViewPA = findViewById(R.id.imageViewPA);
        ImageView imageViewPC = findViewById(R.id.imageViewPC);
        ImageView imageViewPB = findViewById(R.id.imageViewPB);
        ImageView imageViewPS = findViewById(R.id.imageViewPS);
        ImageView imageViewPF = findViewById(R.id.imageViewPF);

        Glide.with(Cartoes_postais.this).load(URLcp).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewCP);
        Glide.with(Cartoes_postais.this).load(URLcj).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewCJ);
        Glide.with(Cartoes_postais.this).load(URLmm).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewMM);
        Glide.with(Cartoes_postais.this).load(URLpa).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewPA);
        Glide.with(Cartoes_postais.this).load(URLpc).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewPC);
        Glide.with(Cartoes_postais.this).load(URLpb).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewPB);
        Glide.with(Cartoes_postais.this).load(URLps).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewPS);
        Glide.with(Cartoes_postais.this).load(URLpf).placeholder(R.drawable.progress_bar).diskCacheStrategy(DiskCacheStrategy.AUTOMATIC).into(imageViewPF);

        VejaMaisCP.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutCP.setVisibility(View.VISIBLE);
            } else {
                layoutCP.setVisibility(View.GONE);

            }
        });
        VejaMaisCJ.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutcj.setVisibility(View.VISIBLE);
            } else {
                layoutcj.setVisibility(View.GONE);

            }
        });
        VejaMaisMM.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutmm.setVisibility(View.VISIBLE);
            } else {
                layoutmm.setVisibility(View.GONE);

            }
        });
        VejaMaisPA.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutpa.setVisibility(View.VISIBLE);
            } else {
                layoutpa.setVisibility(View.GONE);

            }
        });
        VejaMaisPC.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutpc.setVisibility(View.VISIBLE);
            } else {
                layoutpc.setVisibility(View.GONE);

            }
        });
        VejaMaisPB.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutpb.setVisibility(View.VISIBLE);
            } else {
                layoutpb.setVisibility(View.GONE);

            }
        });
        VejaMaisPS.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutps.setVisibility(View.VISIBLE);
            } else {
                layoutps.setVisibility(View.GONE);

            }
        });
        VejaMaisPF.setOnCheckedChangeListener((buttonView, isChecked) -> {
            if (isChecked){
                layoutpf.setVisibility(View.VISIBLE);
            } else {
                layoutpf.setVisibility(View.GONE);

            }
        });

    }

    public void generateMap(MapView mapView, GeoPoint geoPoint, String marker ){
        mapView.setTileSource(TileSourceFactory.MAPNIK);
        mapView.setBuiltInZoomControls(true);
        mapView.setMultiTouchControls(true);
        IMapController mapController = mapView.getController();
        mapController.setZoom(16.0);
        mapController.setCenter(geoPoint);

        ArrayList<OverlayItem> items = new ArrayList<>();
        OverlayItem home = new OverlayItem(marker, "", geoPoint);
        Drawable m = home.getMarker(0);
        items.add(home);

        ItemizedOverlayWithFocus<OverlayItem> mOverlay = new ItemizedOverlayWithFocus<OverlayItem>(getApplicationContext(),
                items, new ItemizedIconOverlay.OnItemGestureListener<OverlayItem>() {
            @Override
            public boolean onItemSingleTapUp(int index, OverlayItem item) {
                return true;
            }

            @Override
            public boolean onItemLongPress(int index, OverlayItem item) {
                return false;
            }
        });

        mOverlay.setFocusItemsOnTap(true);
        mapView.getOverlays().add(mOverlay);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        getMenuInflater().inflate(R.menu.menu_principal, menu);
        return super.onCreateOptionsMenu(menu);
    }

    @Override
    public boolean onOptionsItemSelected(@NonNull MenuItem item) {
        switch (item.getItemId()){
            case R.id.item_praias:
                Activity_praias();
                break;
            case R.id.item_parques:
                Activity_parques();
                break;
            case R.id.item_belezas_naturais:
                Activity_belezas_naturais();
                break;
            case R.id.item_Igreja_e_Conventos:
                Activity_igrejas_e_conventos();
                break;
            case R.id.museu:
                Activity_museu();
                break;
        }
        return super.onOptionsItemSelected(item);
    }

    @Override
    public void onPause(){
        super.onPause();
        mapViewCP.onPause();
        mapViewCJ.onPause();
        mapViewMM.onPause();
        mapViewPA.onPause();
        mapViewPC.onPause();
        mapViewPB.onPause();
        mapViewPS.onPause();
        mapViewPF.onPause();
    }

    @Override
    public void onResume(){
        super.onResume();
        mapViewCP.onResume();
        mapViewCJ.onResume();
        mapViewMM.onResume();
        mapViewPA.onResume();
        mapViewPC.onResume();
        mapViewPB.onResume();
        mapViewPS.onResume();
        mapViewPF.onResume();
    }
}
