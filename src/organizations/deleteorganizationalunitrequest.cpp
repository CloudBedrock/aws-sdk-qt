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

#include "deleteorganizationalunitrequest.h"
#include "deleteorganizationalunitrequest_p.h"
#include "deleteorganizationalunitresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  DeleteOrganizationalUnitRequest
 *
 * @brief  Implements Organizations DeleteOrganizationalUnit requests.
 *
 * @see    OrganizationsClient::deleteOrganizationalUnit
 */

/**
 * @brief  Constructs a new DeleteOrganizationalUnitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteOrganizationalUnitResponse::DeleteOrganizationalUnitResponse(

/**
 * @brief  Constructs a new DeleteOrganizationalUnitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteOrganizationalUnitRequest::DeleteOrganizationalUnitRequest(const DeleteOrganizationalUnitRequest &other)
    : OrganizationsRequest(new DeleteOrganizationalUnitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteOrganizationalUnitRequest object.
 */
DeleteOrganizationalUnitRequest::DeleteOrganizationalUnitRequest()
    : OrganizationsRequest(new DeleteOrganizationalUnitRequestPrivate(OrganizationsRequest::DeleteOrganizationalUnitAction, this))
{

}

bool DeleteOrganizationalUnitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteOrganizationalUnitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteOrganizationalUnitResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * DeleteOrganizationalUnitRequest::response(QNetworkReply * const reply) const
{
    return new DeleteOrganizationalUnitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteOrganizationalUnitRequestPrivate
 *
 * @brief  Private implementation for DeleteOrganizationalUnitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOrganizationalUnitRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DeleteOrganizationalUnitRequest instance.
 */
DeleteOrganizationalUnitRequestPrivate::DeleteOrganizationalUnitRequestPrivate(
    const OrganizationsRequest::Action action, DeleteOrganizationalUnitRequest * const q)
    : DeleteOrganizationalUnitPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOrganizationalUnitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteOrganizationalUnitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteOrganizationalUnitRequest instance.
 */
DeleteOrganizationalUnitRequestPrivate::DeleteOrganizationalUnitRequestPrivate(
    const DeleteOrganizationalUnitRequestPrivate &other, DeleteOrganizationalUnitRequest * const q)
    : DeleteOrganizationalUnitPrivate(other, q)
{

}
