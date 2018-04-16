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

#include "listpublickeysrequest.h"
#include "listpublickeysrequest_p.h"
#include "listpublickeysresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListPublicKeysRequest
 *
 * \brief The ListPublicKeysRequest class provides an interface for CloudFront ListPublicKeys requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listPublicKeys
 */

/*!
 * @brief  Constructs a new ListPublicKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPublicKeysRequest::ListPublicKeysRequest(const ListPublicKeysRequest &other)
    : CloudFrontRequest(new ListPublicKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListPublicKeysRequest object.
 */
ListPublicKeysRequest::ListPublicKeysRequest()
    : CloudFrontRequest(new ListPublicKeysRequestPrivate(CloudFrontRequest::ListPublicKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ListPublicKeysRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListPublicKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPublicKeysResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPublicKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListPublicKeysResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListPublicKeysRequestPrivate
 *
 * @brief  Private implementation for ListPublicKeysRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListPublicKeysRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListPublicKeysRequest instance.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const CloudFrontRequest::Action action, ListPublicKeysRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListPublicKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPublicKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPublicKeysRequest instance.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const ListPublicKeysRequestPrivate &other, ListPublicKeysRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
