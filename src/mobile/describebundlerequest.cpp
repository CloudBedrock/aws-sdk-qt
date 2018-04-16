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

#include "describebundlerequest.h"
#include "describebundlerequest_p.h"
#include "describebundleresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DescribeBundleRequest
 *
 * \brief The DescribeBundleRequest class provides an interface for Mobile DescribeBundle requests.
 *
 * \ingroup Mobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::describeBundle
 */

/*!
 * @brief  Constructs a new DescribeBundleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeBundleRequest::DescribeBundleRequest(const DescribeBundleRequest &other)
    : MobileRequest(new DescribeBundleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeBundleRequest object.
 */
DescribeBundleRequest::DescribeBundleRequest()
    : MobileRequest(new DescribeBundleRequestPrivate(MobileRequest::DescribeBundleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBundleRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeBundleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeBundleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MobileClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBundleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBundleResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeBundleRequestPrivate
 *
 * @brief  Private implementation for DescribeBundleRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBundleRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public DescribeBundleRequest instance.
 */
DescribeBundleRequestPrivate::DescribeBundleRequestPrivate(
    const MobileRequest::Action action, DescribeBundleRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBundleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeBundleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeBundleRequest instance.
 */
DescribeBundleRequestPrivate::DescribeBundleRequestPrivate(
    const DescribeBundleRequestPrivate &other, DescribeBundleRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
