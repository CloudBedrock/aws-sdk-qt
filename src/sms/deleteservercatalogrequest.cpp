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

#include "deleteservercatalogrequest.h"
#include "deleteservercatalogrequest_p.h"
#include "deleteservercatalogresponse.h"
#include "smsrequest_p.h"

namespace AWS {
namespace SMS {

/**
 * @class  DeleteServerCatalogRequest
 *
 * @brief  Implements SMS DeleteServerCatalog requests.
 *
 * @see    SMSClient::deleteServerCatalog
 */

/**
 * @brief  Constructs a new DeleteServerCatalogResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServerCatalogResponse::DeleteServerCatalogResponse(

/**
 * @brief  Constructs a new DeleteServerCatalogRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteServerCatalogRequest::DeleteServerCatalogRequest(const DeleteServerCatalogRequest &other)
    : SMSRequest(new DeleteServerCatalogRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteServerCatalogRequest object.
 */
DeleteServerCatalogRequest::DeleteServerCatalogRequest()
    : SMSRequest(new DeleteServerCatalogRequestPrivate(SMSRequest::DeleteServerCatalogAction, this))
{

}

bool DeleteServerCatalogRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteServerCatalogResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteServerCatalogResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SMSClient::send
 */
AwsAbstractResponse * DeleteServerCatalogRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServerCatalogResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteServerCatalogRequestPrivate
 *
 * @brief  Private implementation for DeleteServerCatalogRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerCatalogRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public DeleteServerCatalogRequest instance.
 */
DeleteServerCatalogRequestPrivate::DeleteServerCatalogRequestPrivate(
    const SMSRequest::Action action, DeleteServerCatalogRequest * const q)
    : DeleteServerCatalogPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerCatalogRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteServerCatalogRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteServerCatalogRequest instance.
 */
DeleteServerCatalogRequestPrivate::DeleteServerCatalogRequestPrivate(
    const DeleteServerCatalogRequestPrivate &other, DeleteServerCatalogRequest * const q)
    : DeleteServerCatalogPrivate(other, q)
{

}

} // namespace SMS
} // namespace AWS
