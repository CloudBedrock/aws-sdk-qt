/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "issuecertificaterequest.h"
#include "issuecertificaterequest_p.h"
#include "issuecertificateresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::IssueCertificateRequest
 *
 * \brief The IssueCertificateRequest class encapsulates ACMPCA IssueCertificate requests.
 *
 * \ingroup ACMPCA
 *
 *  You can use the ACM PCA API to create a private certificate authority (CA). You must first call the
 *  <a>CreateCertificateAuthority</a> function. If successful, the function returns an Amazon Resource Name (ARN) for your
 *  private CA. Use this ARN as input to the <a>GetCertificateAuthorityCsr</a> function to retrieve the certificate signing
 *  request (CSR) for your private CA certificate. Sign the CSR using the root or an intermediate CA in your on-premises PKI
 *  hierarchy, and call the <a>ImportCertificateAuthorityCertificate</a> to import your signed private CA certificate into
 *  ACM PCA.
 * 
 *  </p
 * 
 *  Use your private CA to issue and revoke certificates. These are private certificates that identify and secure client
 *  computers, servers, applications, services, devices, and users over SSLS/TLS connections within your organization. Call
 *  the <a>IssueCertificate</a> function to issue a certificate. Call the <a>RevokeCertificate</a> function to revoke a
 *  certificate.
 * 
 *  </p <note>
 * 
 *  Certificates issued by your private CA can be trusted only within your organization, not
 * 
 *  publicly> </note>
 * 
 *  Your private CA can optionally create a certificate revocation list (CRL) to track the certificates you revoke. To
 *  create a CRL, you must specify a <a>RevocationConfiguration</a> object when you call the
 *  <a>CreateCertificateAuthority</a> function. ACM PCA writes the CRL to an S3 bucket that you specify. You must specify a
 *  bucket policy that grants ACM PCA write permission.
 * 
 *  </p
 * 
 *  You can also call the <a>CreateCertificateAuthorityAuditReport</a> to create an optional audit report that lists every
 *  time the CA private key is used. The private key is used for signing when the <b>IssueCertificate</b> or
 *  <b>RevokeCertificate</b> function is called.
 *
 * \sa ACMPCAClient::issueCertificate
 */

/*!
 * @brief  Constructs a new IssueCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
IssueCertificateRequest::IssueCertificateRequest(const IssueCertificateRequest &other)
    : ACMPCARequest(new IssueCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new IssueCertificateRequest object.
 */
IssueCertificateRequest::IssueCertificateRequest()
    : ACMPCARequest(new IssueCertificateRequestPrivate(ACMPCARequest::IssueCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool IssueCertificateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an IssueCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An IssueCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMPCAClient::send
 */
QtAws::Core::AwsAbstractResponse * IssueCertificateRequest::response(QNetworkReply * const reply) const
{
    return new IssueCertificateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  IssueCertificateRequestPrivate
 *
 * @brief  Private implementation for IssueCertificateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new IssueCertificateRequestPrivate object.
 *
 * @param  action  ACMPCA action being performed.
 * @param  q       Pointer to this object's public IssueCertificateRequest instance.
 */
IssueCertificateRequestPrivate::IssueCertificateRequestPrivate(
    const ACMPCARequest::Action action, IssueCertificateRequest * const q)
    : ACMPCARequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new IssueCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the IssueCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public IssueCertificateRequest instance.
 */
IssueCertificateRequestPrivate::IssueCertificateRequestPrivate(
    const IssueCertificateRequestPrivate &other, IssueCertificateRequest * const q)
    : ACMPCARequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
