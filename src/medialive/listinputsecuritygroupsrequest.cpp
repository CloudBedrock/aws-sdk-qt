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

#include "listinputsecuritygroupsrequest.h"
#include "listinputsecuritygroupsrequest_p.h"
#include "listinputsecuritygroupsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsRequest
 *
 * \brief The ListInputSecurityGroupsRequest class provides an interface for MediaLive ListInputSecurityGroups requests.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::listInputSecurityGroups
 */

/*!
 * @brief  Constructs a new ListInputSecurityGroupsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInputSecurityGroupsRequest::ListInputSecurityGroupsRequest(const ListInputSecurityGroupsRequest &other)
    : MediaLiveRequest(new ListInputSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListInputSecurityGroupsRequest object.
 */
ListInputSecurityGroupsRequest::ListInputSecurityGroupsRequest()
    : MediaLiveRequest(new ListInputSecurityGroupsRequestPrivate(MediaLiveRequest::ListInputSecurityGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputSecurityGroupsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListInputSecurityGroupsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInputSecurityGroupsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputSecurityGroupsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListInputSecurityGroupsRequestPrivate
 *
 * @brief  Private implementation for ListInputSecurityGroupsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListInputSecurityGroupsRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public ListInputSecurityGroupsRequest instance.
 */
ListInputSecurityGroupsRequestPrivate::ListInputSecurityGroupsRequestPrivate(
    const MediaLiveRequest::Action action, ListInputSecurityGroupsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListInputSecurityGroupsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInputSecurityGroupsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInputSecurityGroupsRequest instance.
 */
ListInputSecurityGroupsRequestPrivate::ListInputSecurityGroupsRequestPrivate(
    const ListInputSecurityGroupsRequestPrivate &other, ListInputSecurityGroupsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
