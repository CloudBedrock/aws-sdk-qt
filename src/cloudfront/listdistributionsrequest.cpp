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

#include "listdistributionsrequest.h"
#include "listdistributionsrequest_p.h"
#include "listdistributionsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsRequest
 *
 * \brief The ListDistributionsRequest class provides an interface for CloudFront ListDistributions requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributions
 */

/*!
 * @brief  Constructs a new ListDistributionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDistributionsRequest::ListDistributionsRequest(const ListDistributionsRequest &other)
    : CloudFrontRequest(new ListDistributionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListDistributionsRequest object.
 */
ListDistributionsRequest::ListDistributionsRequest()
    : CloudFrontRequest(new ListDistributionsRequestPrivate(CloudFrontRequest::ListDistributionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListDistributionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDistributionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListDistributionsRequestPrivate
 *
 * @brief  Private implementation for ListDistributionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDistributionsRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListDistributionsRequest instance.
 */
ListDistributionsRequestPrivate::ListDistributionsRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListDistributionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDistributionsRequest instance.
 */
ListDistributionsRequestPrivate::ListDistributionsRequestPrivate(
    const ListDistributionsRequestPrivate &other, ListDistributionsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
