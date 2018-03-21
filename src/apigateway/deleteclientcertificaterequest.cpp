/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteclientcertificaterequest.h"
#include "deleteclientcertificaterequest_p.h"
#include "deleteclientcertificateresponse.h"
#include "apigatewayrequest_p.h"

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteClientCertificateRequest
 *
 * @brief  Implements APIGateway DeleteClientCertificate requests.
 *
 * @see    APIGatewayClient::deleteClientCertificate
 */

/**
 * @brief  Constructs a new DeleteClientCertificateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClientCertificateResponse::DeleteClientCertificateResponse(

/**
 * @brief  Constructs a new DeleteClientCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteClientCertificateRequest::DeleteClientCertificateRequest(const DeleteClientCertificateRequest &other)
    : APIGatewayRequest(new DeleteClientCertificateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteClientCertificateRequest object.
 */
DeleteClientCertificateRequest::DeleteClientCertificateRequest()
    : APIGatewayRequest(new DeleteClientCertificateRequestPrivate(APIGatewayRequest::DeleteClientCertificateAction, this))
{

}

bool DeleteClientCertificateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteClientCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteClientCertificateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  APIGatewayClient::send
 */
AwsAbstractResponse * DeleteClientCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClientCertificateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteClientCertificateRequestPrivate
 *
 * @brief  Private implementation for DeleteClientCertificateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClientCertificateRequestPrivate object.
 *
 * @param  action  APIGateway action being performed.
 * @param  q       Pointer to this object's public DeleteClientCertificateRequest instance.
 */
DeleteClientCertificateRequestPrivate::DeleteClientCertificateRequestPrivate(
    const APIGatewayRequest::Action action, DeleteClientCertificateRequest * const q)
    : DeleteClientCertificatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClientCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteClientCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteClientCertificateRequest instance.
 */
DeleteClientCertificateRequestPrivate::DeleteClientCertificateRequestPrivate(
    const DeleteClientCertificateRequestPrivate &other, DeleteClientCertificateRequest * const q)
    : DeleteClientCertificatePrivate(other, q)
{

}
