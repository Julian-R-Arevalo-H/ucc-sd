package co.edu.campusucc.sd.modelo;
// Generated 16/03/2020 09:12:15 PM by Hibernate Tools 5.4.7.Final

import java.util.HashSet;
import java.util.Set;

/**
 * Cliente generated by hbm2java
 */
public class Cliente implements java.io.Serializable {

	private String idCliente;
	private Pais pais;
	private TipoCliente tipoCliente;
	private TipoDocumento tipoDocumento;
	private String nombres;
	private String apellidos;
	private String razonSocial;
	private Set biometrias = new HashSet(0);

	public Cliente() {
	}

	public Cliente(String idCliente) {
		this.idCliente = idCliente;
	}

	public Cliente(String idCliente, Pais pais, TipoCliente tipoCliente, TipoDocumento tipoDocumento, String nombres,
			String apellidos, String razonSocial, Set biometrias) {
		this.idCliente = idCliente;
		this.pais = pais;
		this.tipoCliente = tipoCliente;
		this.tipoDocumento = tipoDocumento;
		this.nombres = nombres;
		this.apellidos = apellidos;
		this.razonSocial = razonSocial;
		this.biometrias = biometrias;
	}

	public String getIdCliente() {
		return this.idCliente;
	}

	public void setIdCliente(String idCliente) {
		this.idCliente = idCliente;
	}

	public Pais getPais() {
		return this.pais;
	}

	public void setPais(Pais pais) {
		this.pais = pais;
	}

	public TipoCliente getTipoCliente() {
		return this.tipoCliente;
	}

	public void setTipoCliente(TipoCliente tipoCliente) {
		this.tipoCliente = tipoCliente;
	}

	public TipoDocumento getTipoDocumento() {
		return this.tipoDocumento;
	}

	public void setTipoDocumento(TipoDocumento tipoDocumento) {
		this.tipoDocumento = tipoDocumento;
	}

	public String getNombres() {
		return this.nombres;
	}

	public void setNombres(String nombres) {
		this.nombres = nombres;
	}

	public String getApellidos() {
		return this.apellidos;
	}

	public void setApellidos(String apellidos) {
		this.apellidos = apellidos;
	}

	public String getRazonSocial() {
		return this.razonSocial;
	}

	public void setRazonSocial(String razonSocial) {
		this.razonSocial = razonSocial;
	}

	public Set getBiometrias() {
		return this.biometrias;
	}

	public void setBiometrias(Set biometrias) {
		this.biometrias = biometrias;
	}

}
