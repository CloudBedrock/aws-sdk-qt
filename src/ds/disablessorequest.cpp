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

#include "disablessorequest.h"
#include "disablessorequest_p.h"
#include "disablessoresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DisableSsoRequest
 *
 * @brief  Implements DirectoryService DisableSso requests.
 *
 * @see    DirectoryServiceClient::disableSso
 */

/**
 * @brief  Constructs a new DisableSsoRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableSsoRequest::DisableSsoRequest(const DisableSsoRequest &other)
    : DirectoryServiceRequest(new DisableSsoRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableSsoRequest object.
 */
DisableSsoRequest::DisableSsoRequest()
    : DirectoryServiceRequest(new DisableSsoRequestPrivate(DirectoryServiceRequest::DisableSsoAction, this))
{

}

bool DisableSsoRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableSsoResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableSsoResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableSsoRequest::response(QNetworkReply * const reply) const
{
    return new DisableSsoResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableSsoRequestPrivate
 *
 * @brief  Private implementation for DisableSsoRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableSsoRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DisableSsoRequest instance.
 */
DisableSsoRequestPrivate::DisableSsoRequestPrivate(
    const DirectoryServiceRequest::Action action, DisableSsoRequest * const q)
    : DisableSsoPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableSsoRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableSsoRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableSsoRequest instance.
 */
DisableSsoRequestPrivate::DisableSsoRequestPrivate(
    const DisableSsoRequestPrivate &other, DisableSsoRequest * const q)
    : DisableSsoPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
